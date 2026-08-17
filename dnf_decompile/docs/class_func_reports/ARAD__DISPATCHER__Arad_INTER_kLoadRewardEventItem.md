# ARAD__DISPATCHER__Arad_INTER_kLoadRewardEventItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08198fd0 ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig  [0x08198fd0-0x8199277] ===
 8198fd0:	55                   	push   %ebp
 8198fd1:	89 e5                	mov    %esp,%ebp
 8198fd3:	56                   	push   %esi
 8198fd4:	53                   	push   %ebx
 8198fd5:	83 ec 40             	sub    $0x40,%esp
 8198fd8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8198fdc:	74 0f                	je     8198fed <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x1d>
 8198fde:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198fe1:	89 04 24             	mov    %eax,(%esp)
 8198fe4:	e8 49 74 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8198fe9:	85 c0                	test   %eax,%eax
 8198feb:	75 07                	jne    8198ff4 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x24>
 8198fed:	b8 01 00 00 00       	mov    $0x1,%eax
 8198ff2:	eb 05                	jmp    8198ff9 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x29>
 8198ff4:	b8 00 00 00 00       	mov    $0x0,%eax
 8198ff9:	84 c0                	test   %al,%al
 8198ffb:	74 0a                	je     8199007 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x37>
 8198ffd:	b8 d3 04 00 00       	mov    $0x4d3,%eax
 8199002:	e9 69 02 00 00       	jmp    8199270 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x2a0>
 8199007:	8b 45 10             	mov    0x10(%ebp),%eax
 819900a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819900d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8199011:	75 36                	jne    8199049 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x79>
 8199013:	c7 44 24 10 14 1d ba 	movl   $0x8ba1d14,0x10(%esp)
 819901a:	08 
 819901b:	c7 44 24 0c d8 04 00 	movl   $0x4d8,0xc(%esp)
 8199022:	00 
 8199023:	c7 44 24 08 c0 2f ba 	movl   $0x8ba2fc0,0x8(%esp)
 819902a:	08 
 819902b:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 8199032:	08 
 8199033:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 819903a:	e8 cb ab 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819903f:	b8 d9 04 00 00       	mov    $0x4d9,%eax
 8199044:	e9 27 02 00 00       	jmp    8199270 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x2a0>
 8199049:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 819904c:	89 04 24             	mov    %eax,(%esp)
 819904f:	e8 7c 70 54 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8199054:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 8199057:	89 44 24 08          	mov    %eax,0x8(%esp)
 819905b:	c7 44 24 04 34 1d ba 	movl   $0x8ba1d34,0x4(%esp)
 8199062:	08 
 8199063:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8199066:	89 04 24             	mov    %eax,(%esp)
 8199069:	e8 c2 e5 56 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 819906e:	e8 87 ee ff ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 8199073:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8199076:	89 54 24 04          	mov    %edx,0x4(%esp)
 819907a:	89 04 24             	mov    %eax,(%esp)
 819907d:	e8 2a f2 fe ff       	call   81882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>
 8199082:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8199085:	89 54 24 08          	mov    %edx,0x8(%esp)
 8199089:	8b 55 0c             	mov    0xc(%ebp),%edx
 819908c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8199090:	89 04 24             	mov    %eax,(%esp)
 8199093:	e8 fc c8 ff ff       	call   8195994 <_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRN4arad22SigLoadRewardEventItemE>
 8199098:	eb 15                	jmp    81990af <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0xdf>
 819909a:	89 d3                	mov    %edx,%ebx
 819909c:	89 c6                	mov    %eax,%esi
 819909e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81990a1:	89 04 24             	mov    %eax,(%esp)
 81990a4:	e8 37 eb 56 00       	call   8707be0 <_ZNSsD1Ev>
 81990a9:	89 f0                	mov    %esi,%eax
 81990ab:	89 da                	mov    %ebx,%edx
 81990ad:	eb 0d                	jmp    81990bc <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0xec>
 81990af:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81990b2:	89 04 24             	mov    %eax,(%esp)
 81990b5:	e8 26 eb 56 00       	call   8707be0 <_ZNSsD1Ev>
 81990ba:	eb 1b                	jmp    81990d7 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x107>
 81990bc:	89 d3                	mov    %edx,%ebx
 81990be:	89 c6                	mov    %eax,%esi
 81990c0:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81990c3:	89 04 24             	mov    %eax,(%esp)
 81990c6:	e8 25 70 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81990cb:	89 f0                	mov    %esi,%eax
 81990cd:	89 da                	mov    %ebx,%edx
 81990cf:	89 04 24             	mov    %eax,(%esp)
 81990d2:	e8 79 a6 94 00       	call   8ae3750 <_Unwind_Resume>
 81990d7:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81990da:	89 04 24             	mov    %eax,(%esp)
 81990dd:	e8 0e 70 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81990e2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81990e9:	e8 b0 2b f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81990ee:	89 c3                	mov    %eax,%ebx
 81990f0:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81990f3:	89 04 24             	mov    %eax,(%esp)
 81990f6:	e8 d5 6f 54 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81990fb:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81990fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 8199102:	c7 44 24 04 34 1d ba 	movl   $0x8ba1d34,0x4(%esp)
 8199109:	08 
 819910a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819910d:	89 04 24             	mov    %eax,(%esp)
 8199110:	e8 1b e5 56 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8199115:	e8 e0 ed ff ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 819911a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 819911d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8199121:	89 04 24             	mov    %eax,(%esp)
 8199124:	e8 83 f1 fe ff       	call   81882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>
 8199129:	8b 55 0c             	mov    0xc(%ebp),%edx
 819912c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8199130:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8199134:	c7 44 24 04 8f 00 00 	movl   $0x8f,0x4(%esp)
 819913b:	00 
 819913c:	89 04 24             	mov    %eax,(%esp)
 819913f:	e8 84 1a 00 00       	call   819abc8 <_ZN4ARAD27Arad_EventPeriodDataManager11eventRewardINS_13FnRewardLetheEEEb22ENUM_REPEAT_EVENT_CODEjP5CUser>
 8199144:	eb 15                	jmp    819915b <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x18b>
 8199146:	89 d3                	mov    %edx,%ebx
 8199148:	89 c6                	mov    %eax,%esi
 819914a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819914d:	89 04 24             	mov    %eax,(%esp)
 8199150:	e8 8b ea 56 00       	call   8707be0 <_ZNSsD1Ev>
 8199155:	89 f0                	mov    %esi,%eax
 8199157:	89 da                	mov    %ebx,%edx
 8199159:	eb 0d                	jmp    8199168 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x198>
 819915b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819915e:	89 04 24             	mov    %eax,(%esp)
 8199161:	e8 7a ea 56 00       	call   8707be0 <_ZNSsD1Ev>
 8199166:	eb 1b                	jmp    8199183 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x1b3>
 8199168:	89 d3                	mov    %edx,%ebx
 819916a:	89 c6                	mov    %eax,%esi
 819916c:	8d 45 eb             	lea    -0x15(%ebp),%eax
 819916f:	89 04 24             	mov    %eax,(%esp)
 8199172:	e8 79 6f 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8199177:	89 f0                	mov    %esi,%eax
 8199179:	89 da                	mov    %ebx,%edx
 819917b:	89 04 24             	mov    %eax,(%esp)
 819917e:	e8 cd a5 94 00       	call   8ae3750 <_Unwind_Resume>
 8199183:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8199186:	89 04 24             	mov    %eax,(%esp)
 8199189:	e8 62 6f 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 819918e:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8199193:	c7 44 24 04 9b 00 00 	movl   $0x9b,0x4(%esp)
 819919a:	00 
 819919b:	89 04 24             	mov    %eax,(%esp)
 819919e:	e8 f5 c7 f7 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81991a3:	8b 10                	mov    (%eax),%edx
 81991a5:	83 c2 34             	add    $0x34,%edx
 81991a8:	8b 12                	mov    (%edx),%edx
 81991aa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81991b1:	00 
 81991b2:	89 04 24             	mov    %eax,(%esp)
 81991b5:	ff d2                	call   *%edx
 81991b7:	84 c0                	test   %al,%al
 81991b9:	0f 84 ac 00 00 00    	je     819926b <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x29b>
 81991bf:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81991c6:	e8 d3 2a f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81991cb:	89 c3                	mov    %eax,%ebx
 81991cd:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81991d0:	89 04 24             	mov    %eax,(%esp)
 81991d3:	e8 f8 6e 54 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81991d8:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81991db:	89 44 24 08          	mov    %eax,0x8(%esp)
 81991df:	c7 44 24 04 34 1d ba 	movl   $0x8ba1d34,0x4(%esp)
 81991e6:	08 
 81991e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81991ea:	89 04 24             	mov    %eax,(%esp)
 81991ed:	e8 3e e4 56 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81991f2:	e8 03 ed ff ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 81991f7:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81991fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81991fe:	89 04 24             	mov    %eax,(%esp)
 8199201:	e8 a6 f0 fe ff       	call   81882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>
 8199206:	8b 55 0c             	mov    0xc(%ebp),%edx
 8199209:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819920d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8199211:	c7 44 24 04 9b 00 00 	movl   $0x9b,0x4(%esp)
 8199218:	00 
 8199219:	89 04 24             	mov    %eax,(%esp)
 819921c:	e8 95 1b 00 00       	call   819adb6 <_ZN4ARAD27Arad_EventPeriodDataManager11eventRewardINS_14FnRewardMomojiEEEb22ENUM_REPEAT_EVENT_CODEjP5CUser>
 8199221:	eb 15                	jmp    8199238 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x268>
 8199223:	89 d3                	mov    %edx,%ebx
 8199225:	89 c6                	mov    %eax,%esi
 8199227:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819922a:	89 04 24             	mov    %eax,(%esp)
 819922d:	e8 ae e9 56 00       	call   8707be0 <_ZNSsD1Ev>
 8199232:	89 f0                	mov    %esi,%eax
 8199234:	89 da                	mov    %ebx,%edx
 8199236:	eb 0d                	jmp    8199245 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x275>
 8199238:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819923b:	89 04 24             	mov    %eax,(%esp)
 819923e:	e8 9d e9 56 00       	call   8707be0 <_ZNSsD1Ev>
 8199243:	eb 1b                	jmp    8199260 <_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci+0x290>
 8199245:	89 d3                	mov    %edx,%ebx
 8199247:	89 c6                	mov    %eax,%esi
 8199249:	8d 45 f3             	lea    -0xd(%ebp),%eax
 819924c:	89 04 24             	mov    %eax,(%esp)
 819924f:	e8 9c 6e 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8199254:	89 f0                	mov    %esi,%eax
 8199256:	89 da                	mov    %ebx,%edx
 8199258:	89 04 24             	mov    %eax,(%esp)
 819925b:	e8 f0 a4 94 00       	call   8ae3750 <_Unwind_Resume>
 8199260:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8199263:	89 04 24             	mov    %eax,(%esp)
 8199266:	e8 85 6e 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 819926b:	b8 00 00 00 00       	mov    $0x0,%eax
 8199270:	83 c4 40             	add    $0x40,%esp
 8199273:	5b                   	pop    %ebx
 8199274:	5e                   	pop    %esi
 8199275:	5d                   	pop    %ebp
 8199276:	c3                   	ret
 8199277:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig @ 0x8198fd0

/* ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Arad_DataManager *pAVar5;
  Arad_EventPeriodDataManager *pAVar6;
  int *piVar7;
  string local_28 [7];
  allocator<char> local_21;
  string local_20 [7];
  allocator<char> local_19;
  string local_18 [7];
  allocator<char> local_11;
  SigLoadRewardEventItem *local_10;
  
  if (param_2 != (char *)0x0) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08198ff9;
    }
  }
  bVar1 = true;
LAB_08198ff9:
  if (bVar1) {
    uVar4 = 0x4d3;
  }
  else {
    local_10 = (SigLoadRewardEventItem *)param_3;
    if (param_3 == 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_InterDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig(CUser*, char*, int)"
                 ,0x4d8,"SigLoadRewardEventItem is null.");
      uVar4 = 0x4d9;
    }
    else {
      std::allocator<char>::allocator();
                    /* try { // try from 08199069 to 0819906d has its CatchHandler @ 081990bc */
      std::string::string(local_28,"Arad_EventPeriodDataManager",(allocator *)&local_21);
                    /* try { // try from 0819906e to 08199097 has its CatchHandler @ 0819909a */
      pAVar5 = (Arad_DataManager *)Singleton<ARAD::Arad_DataManager>::Get();
      pAVar6 = (Arad_EventPeriodDataManager *)
               Arad_DataManager::findGameScript(pAVar5,(string)local_28);
      Arad_EventPeriodDataManager::addUserRewardData(pAVar6,(CUser *)param_2,local_10);
                    /* try { // try from 081990b5 to 081990b9 has its CatchHandler @ 081990bc */
      std::string::~string(local_28);
      std::allocator<char>::~allocator(&local_21);
      uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      std::allocator<char>::allocator();
                    /* try { // try from 08199110 to 08199114 has its CatchHandler @ 08199168 */
      std::string::string(local_20,"Arad_EventPeriodDataManager",(allocator *)&local_19);
                    /* try { // try from 08199115 to 08199143 has its CatchHandler @ 08199146 */
      pAVar5 = (Arad_DataManager *)Singleton<ARAD::Arad_DataManager>::Get();
      pAVar6 = (Arad_EventPeriodDataManager *)
               Arad_DataManager::findGameScript(pAVar5,(string)local_20);
      Arad_EventPeriodDataManager::eventReward<ARAD::FnRewardLethe>(pAVar6,0x8f,uVar4,param_2);
                    /* try { // try from 08199161 to 08199165 has its CatchHandler @ 08199168 */
      std::string::~string(local_20);
      std::allocator<char>::~allocator(&local_19);
      piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9b);
      cVar2 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
      if (cVar2 != '\0') {
        uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        std::allocator<char>::allocator();
                    /* try { // try from 081991ed to 081991f1 has its CatchHandler @ 08199245 */
        std::string::string(local_18,"Arad_EventPeriodDataManager",(allocator *)&local_11);
                    /* try { // try from 081991f2 to 08199220 has its CatchHandler @ 08199223 */
        pAVar5 = (Arad_DataManager *)Singleton<ARAD::Arad_DataManager>::Get();
        pAVar6 = (Arad_EventPeriodDataManager *)
                 Arad_DataManager::findGameScript(pAVar5,(string)local_18);
        Arad_EventPeriodDataManager::eventReward<ARAD::FnRewardMomoji>(pAVar6,0x9b,uVar4,param_2);
                    /* try { // try from 0819923e to 08199242 has its CatchHandler @ 08199245 */
        std::string::~string(local_18);
        std::allocator<char>::~allocator(&local_11);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

