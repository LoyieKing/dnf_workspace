# Inter_LoadCerashopAddRestrictType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 080e2104 Inter_LoadCerashopAddRestrictType::dispatch_sig  [0x080e2104-0x80e2219] ===
 80e2104:	55                   	push   %ebp
 80e2105:	89 e5                	mov    %esp,%ebp
 80e2107:	83 ec 48             	sub    $0x48,%esp
 80e210a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80e210e:	74 06                	je     80e2116 <_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci+0x12>
 80e2110:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80e2114:	75 48                	jne    80e215e <_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci+0x5a>
 80e2116:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 80e211d:	00 
 80e211e:	c7 44 24 08 00 02 00 	movl   $0x200,0x8(%esp)
 80e2125:	00 
 80e2126:	c7 44 24 04 c0 da b2 	movl   $0x8b2dac0,0x4(%esp)
 80e212d:	08 
 80e212e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80e2131:	89 04 24             	mov    %eax,(%esp)
 80e2134:	e8 df d5 46 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80e2139:	c7 44 24 08 c0 da b2 	movl   $0x8b2dac0,0x8(%esp)
 80e2140:	08 
 80e2141:	c7 44 24 04 70 ce b2 	movl   $0x8b2ce70,0x4(%esp)
 80e2148:	08 
 80e2149:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80e214c:	89 04 24             	mov    %eax,(%esp)
 80e214f:	e8 34 d6 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80e2154:	b8 01 02 00 00       	mov    $0x201,%eax
 80e2159:	e9 ba 00 00 00       	jmp    80e2218 <_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci+0x114>
 80e215e:	8b 45 10             	mov    0x10(%ebp),%eax
 80e2161:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e2164:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80e2168:	75 45                	jne    80e21af <_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci+0xab>
 80e216a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 80e2171:	00 
 80e2172:	c7 44 24 08 07 02 00 	movl   $0x207,0x8(%esp)
 80e2179:	00 
 80e217a:	c7 44 24 04 c0 da b2 	movl   $0x8b2dac0,0x4(%esp)
 80e2181:	08 
 80e2182:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e2185:	89 04 24             	mov    %eax,(%esp)
 80e2188:	e8 8b d5 46 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80e218d:	c7 44 24 08 c0 da b2 	movl   $0x8b2dac0,0x8(%esp)
 80e2194:	08 
 80e2195:	c7 44 24 04 89 ce b2 	movl   $0x8b2ce89,0x4(%esp)
 80e219c:	08 
 80e219d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e21a0:	89 04 24             	mov    %eax,(%esp)
 80e21a3:	e8 e0 d5 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80e21a8:	b8 08 02 00 00       	mov    $0x208,%eax
 80e21ad:	eb 69                	jmp    80e2218 <_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci+0x114>
 80e21af:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e21b2:	05 e4 d1 08 00       	add    $0x8d1e4,%eax
 80e21b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e21ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e21bd:	8b 40 04             	mov    0x4(%eax),%eax
 80e21c0:	85 c0                	test   %eax,%eax
 80e21c2:	74 07                	je     80e21cb <_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci+0xc7>
 80e21c4:	83 f8 01             	cmp    $0x1,%eax
 80e21c7:	74 20                	je     80e21e9 <_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci+0xe5>
 80e21c9:	eb 3d                	jmp    80e2208 <_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci+0x104>
 80e21cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e21ce:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80e21d1:	8d 4a 30             	lea    0x30(%edx),%ecx
 80e21d4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e21d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e21db:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e21df:	89 0c 24             	mov    %ecx,(%esp)
 80e21e2:	e8 43 f2 ff ff       	call   80e142a <_ZN19CerashopAddRestrict7Manager11LoadProcessERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS1_IjPNS_10paramDailyES3_SaIS4_IS5_SB_EEEP35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE>
 80e21e7:	eb 1f                	jmp    80e2208 <_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci+0x104>
 80e21e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e21ec:	8d 48 18             	lea    0x18(%eax),%ecx
 80e21ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e21f2:	8d 50 48             	lea    0x48(%eax),%edx
 80e21f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e21f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e21fc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80e2200:	89 14 24             	mov    %edx,(%esp)
 80e2203:	e8 22 f2 ff ff       	call   80e142a <_ZN19CerashopAddRestrict7Manager11LoadProcessERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS1_IjPNS_10paramDailyES3_SaIS4_IS5_SB_EEEP35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE>
 80e2208:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e220b:	89 04 24             	mov    %eax,(%esp)
 80e220e:	e8 d9 eb ff ff       	call   80e0dec <_ZN19CerashopAddRestrict7Manager14SendSyncPacketEP5CUser>
 80e2213:	b8 00 00 00 00       	mov    $0x0,%eax
 80e2218:	c9                   	leave
 80e2219:	c3                   	ret

```

```c
// Inter_LoadCerashopAddRestrictType::dispatch_sig @ 0x80e2104

/* Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  map *local_10;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    cMyTrace::cMyTrace(local_34,
                       "virtual int Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)"
                       ,0x200,5);
    cMyTrace::operator()
              (local_34,"[%s] pUser or p is null.",
               "virtual int Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)");
    uVar1 = 0x201;
  }
  else {
    local_14 = param_3;
    if (param_3 == 0) {
      cMyTrace::cMyTrace(local_24,
                         "virtual int Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)"
                         ,0x207,5);
      cMyTrace::operator()
                (local_24,"[%s] internal data is null.",
                 "virtual int Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)");
      uVar1 = 0x208;
    }
    else {
      local_10 = (map *)(param_2 + 0x8d1e4);
      if (*(int *)(param_3 + 4) == 0) {
        CerashopAddRestrict::Manager::LoadProcess
                  ((map *)(param_2 + 0x8d214),local_10,
                   (SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *)param_3);
      }
      else if (*(int *)(param_3 + 4) == 1) {
        CerashopAddRestrict::Manager::LoadProcess
                  ((map *)(param_2 + 0x8d22c),(map *)(param_2 + 0x8d1fc),
                   (SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *)param_3);
      }
      CerashopAddRestrict::Manager::SendSyncPacket((CUser *)param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

