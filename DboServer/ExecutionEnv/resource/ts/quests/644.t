CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 3;
	rq = 0;
	tid = 644;
	title = 64402;

	CNtlTSGroup
	{
		gid = 0;

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
			prelnk = "252;0;1;";
			type = 0;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 64407;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 21;
			}
			CDboTSClickNPC
			{
				npcidx = "6311202;";
			}
			CDboTSCheckClrQst
			{
				and = "643;";
				flink = 1;
				flinknextqid = "645;";
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
				conv = 64409;
				ctype = 1;
				idx = 6311202;
				taid = 2;
			}
			CDboTSActSToCEvt
			{
				dt2 = 64425;
				otype2 = 1;
				widx1 = 1;
				iidx0 = -1;
				otype1 = 1;
				widx2 = 1;
				dt0 = 64421;
				esctype = 0;
				iidx1 = -1;
				it1 = 64422;
				otype0 = 1;
				tidx2 = 3031405;
				dt1 = 64423;
				etype = 0;
				iidx2 = -1;
				it0 = 64420;
				taid = 3;
				tidx1 = 3032102;
				widx0 = 1;
				apptype = 0;
				eitype = 6;
				tidx0 = 7131102;
				ectype = -1;
				it2 = 64424;
			}
			CDboTSActRegQInfo
			{
				cont = 64408;
				gtype = 1;
				area = 64401;
				goal = 64404;
				grade = 132203;
				rwd = 100;
				scitem = -1;
				sort = 64405;
				stype = 1;
				taid = 1;
				title = 64402;
			}
		}
		CDboTSContGAct
		{
			cid = 101;
			elnk = 255;
			nextlnk = 254;
			prelnk = "100;";

			CDboTSActSToCEvt
			{
				apptype = 0;
				eitype = 6;
				esctype = 0;
				ectype = -1;
				etype = 1;
				taid = 1;
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 64414;
			nextlnk = 101;
			rwdexp = 0;
			rwdtbl = 64401;
			rwdtype = 0;
			ltime = -1;
			prelnk = "3;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = "6311202;";
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 64408;
			gtype = 1;
			oklnk = 2;
			area = 64401;
			goal = 64404;
			sort = 64405;
			prelnk = "0;";
			ds = 1;
			grade = 0;
			rwd = 100;
			title = 64402;
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
				itype = 6;
			}
		}
	}
}

