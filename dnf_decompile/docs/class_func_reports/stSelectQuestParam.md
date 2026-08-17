# stSelectQuestParam

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## stSelectQuestParam

```asm
// === 083480b4 stSelectQuestParam::stSelectQuestParam  [0x083480b4-0x834816f] ===
 83480b4:	55                   	push   %ebp
 83480b5:	89 e5                	mov    %esp,%ebp
 83480b7:	83 ec 18             	sub    $0x18,%esp
 83480ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 83480bd:	89 04 24             	mov    %eax,(%esp)
 83480c0:	e8 5b 5e db ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 83480c5:	8b 55 08             	mov    0x8(%ebp),%edx
 83480c8:	89 42 04             	mov    %eax,0x4(%edx)
 83480cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 83480ce:	89 04 24             	mov    %eax,(%esp)
 83480d1:	e8 be 8b dc ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 83480d6:	0f be d0             	movsbl %al,%edx
 83480d9:	8b 45 08             	mov    0x8(%ebp),%eax
 83480dc:	89 50 08             	mov    %edx,0x8(%eax)
 83480df:	8b 45 0c             	mov    0xc(%ebp),%eax
 83480e2:	89 04 24             	mov    %eax,(%esp)
 83480e5:	e8 52 71 ee ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 83480ea:	0f be d0             	movsbl %al,%edx
 83480ed:	8b 45 08             	mov    0x8(%ebp),%eax
 83480f0:	89 50 0c             	mov    %edx,0xc(%eax)
 83480f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 83480f6:	89 04 24             	mov    %eax,(%esp)
 83480f9:	e8 ba 21 d9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 83480fe:	8b 55 08             	mov    0x8(%ebp),%edx
 8348101:	89 02                	mov    %eax,(%edx)
 8348103:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348106:	89 04 24             	mov    %eax,(%esp)
 8348109:	e8 3c 6d e5 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 834810e:	8b 55 08             	mov    0x8(%ebp),%edx
 8348111:	89 42 10             	mov    %eax,0x10(%edx)
 8348114:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348117:	89 04 24             	mov    %eax,(%esp)
 834811a:	e8 a7 7b ee ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 834811f:	8b 55 08             	mov    0x8(%ebp),%edx
 8348122:	88 42 14             	mov    %al,0x14(%edx)
 8348125:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348128:	89 04 24             	mov    %eax,(%esp)
 834812b:	e8 64 77 ee ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 8348130:	8b 55 08             	mov    0x8(%ebp),%edx
 8348133:	89 42 1c             	mov    %eax,0x1c(%edx)
 8348136:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348139:	89 04 24             	mov    %eax,(%esp)
 834813c:	e8 e5 ce 02 00       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 8348141:	89 44 24 04          	mov    %eax,0x4(%esp)
 8348145:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348148:	89 04 24             	mov    %eax,(%esp)
 834814b:	e8 2c 3b 34 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 8348150:	8b 55 08             	mov    0x8(%ebp),%edx
 8348153:	89 42 20             	mov    %eax,0x20(%edx)
 8348156:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348159:	89 04 24             	mov    %eax,(%esp)
 834815c:	e8 45 27 e5 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 8348161:	8b 90 f0 75 00 00    	mov    0x75f0(%eax),%edx
 8348167:	8b 45 08             	mov    0x8(%ebp),%eax
 834816a:	89 50 24             	mov    %edx,0x24(%eax)
 834816d:	c9                   	leave
 834816e:	c3                   	ret
 834816f:	90                   	nop

```

```c
// stSelectQuestParam::stSelectQuestParam @ 0x83480b4

/* stSelectQuestParam::stSelectQuestParam(CUser*) */

void __thiscall stSelectQuestParam::stSelectQuestParam(stSelectQuestParam *this,CUser *param_1)

{
  char cVar1;
  stSelectQuestParam sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  *(undefined4 *)(this + 4) = uVar3;
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  *(int *)(this + 8) = (int)cVar1;
  cVar1 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
  *(int *)(this + 0xc) = (int)cVar1;
  uVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  *(undefined4 *)this = uVar3;
  uVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  *(undefined4 *)(this + 0x10) = uVar3;
  sVar2 = (stSelectQuestParam)CUser::getPowerSide(param_1);
  this[0x14] = sVar2;
  uVar3 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  *(undefined4 *)(this + 0x1c) = uVar3;
  iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
  uVar3 = CUser::GetCurExpertJobLevel(param_1,iVar4);
  *(undefined4 *)(this + 0x20) = uVar3;
  iVar4 = CUser::getCurCharacQuestR(param_1);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(iVar4 + 0x75f0);
  return;
}

```

