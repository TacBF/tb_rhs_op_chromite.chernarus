class TacBF {	

	class Supply {		
	
		staticWeapons[] = {"RHS_M2StaticMG_WD", "RDS_M2StaticMG_MiniTripod_FIA", "RHS_M252_D", "RDS_TOW_TriPod_FIA", "RDS_Igla_AA_pod_CSAT", "RDS_DSHKM_CSAT", "RDS_DSHkM_Mini_TriPod_CSAT", "RDS_KORD_high_CSAT", "RDS_KORD_CSAT",  "rhs_2b14_82mm_msv", "RHS_NSV_TriPod_VDV", "RDS_SPG9_FIA"};
		class CargoCollections {	
		
			class statics_west {
				
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_WD", 2, 6}, {"RHS_M252_D", 2, 3}, {"TB_Box_West_Mines_F", 2, 0}};
			};
			
			class statics_east {
				transportClear = 1;
				cargo[] = {{"RHS_NSV_TriPod_MSV", 2, 6}, {"TB_Box_East_Mines_F", 2, 0}};
			};
			
			class statics_MG {
				transportClear = 1;
				cargo[] = {{"RHS_NSV_TriPod_MSV", 1, 4}};
			};
			
			class statics_mortar {
				transportClear = 1;
				cargo[] = {{"rhs_2b14_82mm_msv", 0, 3}};
			};
			
			class rds_westFO {
				
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_WD", 2, 4}};
			};

			class rds_eastFO {
				
				transportClear = 1;
				cargo[] = {{"RHS_NSV_TriPod_VDV", 2, 4}};
			};
		};
		
		class Containers {
			
			class ICE_ForwardOutpost_container_WestMG {
				
				crateCollection = "rds_westFO";
				crateMass = 1750; 
			};

			class ICE_ForwardOutpost_container_EastMG {
				
				crateCollection = "rds_eastFO";
				crateMass = 1750; 
			};
		};
    };
};