#ifndef ALPGEN_SOURCE_EMPTY_FILTER_H
#define ALPGEN_SOURCE_EMPTY_FILTER_H

//
// Original Author:  Fabian Stoeckli
//         Created:  Mon Mar 12 17:34:14 CET 2007
// $Id: HAlpgenFilter.h,v 1.1 2007/03/15 10:19:11 fabstoec Exp $
//
//

// Filter to remove empty events produced with MC@NLO/HERWIG


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDFilter.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"

//
// class declaration
//

class AlpgenEmptyEventFilter : public edm::EDFilter {
   public:
      explicit AlpgenEmptyEventFilter(const edm::ParameterSet&);
      ~AlpgenEmptyEventFilter();

   private:
      virtual void beginJob(const edm::EventSetup&) ;
      virtual bool filter(edm::Event&, const edm::EventSetup&);
      virtual void endJob() ;
      
};

#endif
