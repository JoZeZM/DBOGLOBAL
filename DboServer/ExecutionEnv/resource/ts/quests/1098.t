CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 4;
	rq = 0;
	tid = 1098;
	title = 109802;

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
				eitype = 0;
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
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 109808;
			gtype = 2;
			oklnk = 2;
			area = 109801;
			goal = 109804;
			sort = 109805;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 109802;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 109814;
			nextlnk = 101;
			rwdexp = 0;
			rwdtbl = 109801;
			rwdtype = 0;
			ltime = -1;
			prelnk = "3;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = "2951106;";
			}
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
			stdiag = 109807;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 41;
			}
			CDboTSClickNPC
			{
				npcidx = "2951106;";
			}
			CDboTSCheckClrQst
			{
				flink = 1;
				flinknextqid = "1099;";
				not = 0;
			}
		}
		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 3;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 109809;
				ctype = 1;
				idx = 2951106;
				taid = 2;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 5;
				eitype = 0;
				idx0 = 3611201;
				cnt0 = 7;
				cnt2 = 6;
				ectype = -1;
				etype = 0;
				idx1 = 3612201;
				taid = 3;
				esctype = 0;
				idx2 = 3613201;
			}
			CDboTSActRegQInfo
			{
				cont = 109808;
				m3widx = 1;
				m1fy = "0.000000";
				m2widx = 1;
				grade = 132203;
				m1pat = 2;
				m1widx = 1;
				m3fx = "1480.000000";
				m4fy = "0.000000";
				rwd = 100;
				taid = 1;
				gtype = 2;
				m3fy = "0.000000";
				m4fx = "1480.000000";
				m4ttip = 109816;
				area = 109801;
				goal = 109804;
				m0fz = "1630.000000";
				m0widx = 1;
				m1ttip = 109816;
				m2fy = "0.000000";
				m2pat = 2;
				m3fz = "1493.000000";
				m3ttip = 109815;
				scitem = -1;
				stype = 2;
				m0fy = "0.000000";
				m0pat = 2;
				m1fz = "1630.000000";
				m2fx = "1111.000000";
				m2ttip = 109817;
				m4widx = 1;
				m0fx = "1111.000000";
				m0ttip = 109815;
				m3pat = 2;
				m4pat = 2;
				title = 109802;
				m1fx = "1111.000000";
				m2fz = "1630.000000";
				sort = 109805;
				m4fz = "1493.000000";
			}
		}
		CDboTSContGCond
		{
			cid = 3;
			prelnk = "2;";
			nolnk = 255;
			rm = 0;
			yeslnk = 100;

			CDboTSCheckSToCEvt
			{
				itype = 0;
			}
		}
	}
}

