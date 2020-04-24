CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 4;
	rq = 0;
	tid = 1080;
	title = 108002;

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
			stdiag = 108007;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 40;
			}
			CDboTSClickNPC
			{
				npcidx = "4071116;";
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 108014;
			nextlnk = 101;
			rwdexp = 0;
			rwdtbl = 108001;
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
				npcidx = "4071116;";
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
				conv = 108009;
				ctype = 1;
				idx = 4071116;
				taid = 2;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 1;
				idx0 = 790;
				cnt0 = 1;
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
				cont = 108008;
				m3widx = 4;
				m1fy = "0.000000";
				m2widx = 4;
				grade = 132203;
				m1pat = 2;
				m1widx = 4;
				m3fx = "-263.000000";
				m4fy = "0.000000";
				rwd = 100;
				taid = 1;
				gtype = 3;
				m3fy = "0.000000";
				m4fx = "-263.000000";
				m4ttip = 108016;
				area = 108001;
				goal = 108004;
				m0fz = "-285.000000";
				m0widx = 4;
				m1ttip = 108016;
				m2fy = "0.000000";
				m2pat = 2;
				m3fz = "7.000000";
				m3ttip = 108015;
				scitem = -1;
				stype = 2;
				m0fy = "0.000000";
				m0pat = 2;
				m1fz = "-285.000000";
				m2fx = "49.000000";
				m2ttip = 108017;
				m4widx = 4;
				m0fx = "-202.000000";
				m0ttip = 108015;
				m3pat = 2;
				m4pat = 2;
				title = 108002;
				m1fx = "-202.000000";
				m2fz = "-266.850006";
				sort = 108005;
				m4fz = "7.000000";
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 108008;
			gtype = 3;
			oklnk = 2;
			area = 108001;
			goal = 108004;
			sort = 108005;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 108002;
		}
	}
	CNtlTSGroup
	{
		gid = 254;

		CDboTSContEnd
		{
			cid = 254;
			prelnk = "1;2;";
			type = 0;
		}
		CDboTSContGAct
		{
			cid = 2;
			elnk = 255;
			nextlnk = 254;
			prelnk = "1;";

			CDboTSActQItem
			{
				icnt0 = 255;
				iprob0 = "1.000000";
				iidx0 = 790;
				taid = 1;
				type = 1;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 108007;
			nolnk = 255;
			rm = 0;
			yeslnk = 1;
		}
		CDboTSContGCond
		{
			cid = 1;
			prelnk = "0;";
			nolnk = 254;
			rm = 0;
			yeslnk = 2;

			CDboTSCheckQItem
			{
				ct = 1;
				icnt = 1;
				iidx = 790;
			}
		}
	}
}

