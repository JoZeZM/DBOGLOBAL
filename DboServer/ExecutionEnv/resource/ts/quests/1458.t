CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 5;
	rq = 0;
	tid = 1458;
	title = 145802;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 100;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 145809;
				ctype = 1;
				idx = 5531101;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 145808;
				gtype = 1;
				area = 145801;
				goal = 145804;
				grade = 132203;
				rwd = 100;
				scitem = -1;
				sort = 145805;
				stype = 2;
				taid = 1;
				title = 145802;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 145807;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 46;
			}
			CDboTSClickNPC
			{
				npcidx = "5531101;";
			}
			CDboTSCheckClrQst
			{
				and = "1457;";
				flink = 1;
				flinknextqid = "1459;";
				not = 0;
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;1;252;";
			type = 0;
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "100;";
			type = 1;
		}
		CDboTSContGAct
		{
			cid = 252;
			elnk = 255;
			nextlnk = 253;
			prelnk = "2;";
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 145808;
			gtype = 1;
			oklnk = 2;
			area = 145801;
			goal = 145804;
			sort = 145805;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 145802;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 145814;
			nextlnk = 254;
			rwdexp = 0;
			rwdtbl = 145801;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = "3143113;";
			}
		}
	}
}

