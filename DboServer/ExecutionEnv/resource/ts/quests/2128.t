CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 7;
	rq = 0;
	tid = 2128;
	title = 212802;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContGAct
		{
			cid = 101;
			elnk = 255;
			nextlnk = 254;
			prelnk = "100;";

			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 1;
				idx0 = -1;
				cnt0 = 0;
				cnt2 = 0;
				ectype = -1;
				etype = 1;
				idx1 = -1;
				taid = 1;
				esctype = 0;
				idx2 = -1;
			}
		}
		CDboTSContGAct
		{
			cid = 252;
			elnk = 255;
			nextlnk = 253;
			prelnk = "2;";
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "101;";
			type = 1;
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;252;1;";
			type = 0;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 212807;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 51;
			}
			CDboTSCheckClrQst
			{
				and = "2127;";
				flink = 1;
				flinknextqid = "2129;";
				not = 0;
			}
			CDboTSClickNPC
			{
				npcidx = "2801113;";
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 212814;
			nextlnk = 101;
			rwdexp = 0;
			rwdtbl = 212801;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSCheckSToCEvt
			{
				itype = 1;
			}
			CDboTSClickNPC
			{
				npcidx = "2801113;";
			}
		}
		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 100;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 212809;
				ctype = 1;
				idx = 2801113;
				taid = 2;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 1;
				idx0 = 1293;
				cnt0 = 6;
				cnt2 = 0;
				ectype = -1;
				etype = 0;
				idx1 = -1;
				taid = 3;
				esctype = 0;
				idx2 = -1;
			}
			CDboTSActRegQInfo
			{
				cont = 212808;
				m1fx = "165.000000";
				m2fz = "-1712.000000";
				m1fy = "0.000000";
				sort = 212805;
				m2widx = 1;
				grade = 132203;
				m1pat = 2;
				m1widx = 1;
				rwd = 100;
				taid = 1;
				gtype = 2;
				area = 212801;
				goal = 212804;
				m0fz = "-1890.000000";
				m0widx = 1;
				m1ttip = 212815;
				m2fy = "0.000000";
				m2pat = 2;
				scitem = -1;
				stype = 2;
				m0fy = "0.000000";
				m0pat = 2;
				m1fz = "-1913.000000";
				m2fx = "96.000000";
				m2ttip = 212815;
				m0fx = "0.800000";
				m0ttip = 212815;
				title = 212802;
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 212808;
			gtype = 2;
			oklnk = 2;
			area = 212801;
			goal = 212804;
			sort = 212805;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 212802;
		}
	}
	CNtlTSGroup
	{
		gid = 254;

		CDboTSContEnd
		{
			cid = 254;
			prelnk = "1;";
			type = 0;
		}
		CDboTSContGAct
		{
			cid = 1;
			elnk = 255;
			nextlnk = 254;
			prelnk = "0;";

			CDboTSActQItem
			{
				icnt0 = 255;
				iprob0 = "1.000000";
				iidx0 = 1293;
				taid = 1;
				type = 1;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 212807;
			nolnk = 255;
			rm = 0;
			yeslnk = 1;
		}
	}
}

