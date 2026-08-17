# QuickParty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getRandomBuffTypeByName

```asm
// === 08a6e100 QuickParty::getRandomBuffTypeByName  [0x08a6e100-0x8a6e281] ===
 8a6e100:	55                   	push   %ebp
 8a6e101:	89 e5                	mov    %esp,%ebp
 8a6e103:	83 ec 28             	sub    $0x28,%esp
 8a6e106:	c7 45 f4 0b 00 00 00 	movl   $0xb,-0xc(%ebp)
 8a6e10d:	c7 44 24 04 c0 68 e2 	movl   $0x8e268c0,0x4(%esp)
 8a6e114:	08 
 8a6e115:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e118:	89 04 24             	mov    %eax,(%esp)
 8a6e11b:	e8 81 28 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e120:	84 c0                	test   %al,%al
 8a6e122:	74 0c                	je     8a6e130 <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x30>
 8a6e124:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a6e12b:	e9 4d 01 00 00       	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e130:	c7 44 24 04 cf 68 e2 	movl   $0x8e268cf,0x4(%esp)
 8a6e137:	08 
 8a6e138:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e13b:	89 04 24             	mov    %eax,(%esp)
 8a6e13e:	e8 5e 28 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e143:	84 c0                	test   %al,%al
 8a6e145:	74 0c                	je     8a6e153 <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x53>
 8a6e147:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8a6e14e:	e9 2a 01 00 00       	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e153:	c7 44 24 04 e0 68 e2 	movl   $0x8e268e0,0x4(%esp)
 8a6e15a:	08 
 8a6e15b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e15e:	89 04 24             	mov    %eax,(%esp)
 8a6e161:	e8 3b 28 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e166:	84 c0                	test   %al,%al
 8a6e168:	74 0c                	je     8a6e176 <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x76>
 8a6e16a:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 8a6e171:	e9 07 01 00 00       	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e176:	c7 44 24 04 f1 68 e2 	movl   $0x8e268f1,0x4(%esp)
 8a6e17d:	08 
 8a6e17e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e181:	89 04 24             	mov    %eax,(%esp)
 8a6e184:	e8 18 28 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e189:	84 c0                	test   %al,%al
 8a6e18b:	74 0c                	je     8a6e199 <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x99>
 8a6e18d:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
 8a6e194:	e9 e4 00 00 00       	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e199:	c7 44 24 04 05 69 e2 	movl   $0x8e26905,0x4(%esp)
 8a6e1a0:	08 
 8a6e1a1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e1a4:	89 04 24             	mov    %eax,(%esp)
 8a6e1a7:	e8 f5 27 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e1ac:	84 c0                	test   %al,%al
 8a6e1ae:	74 0c                	je     8a6e1bc <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0xbc>
 8a6e1b0:	c7 45 f4 04 00 00 00 	movl   $0x4,-0xc(%ebp)
 8a6e1b7:	e9 c1 00 00 00       	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e1bc:	c7 44 24 04 1a 69 e2 	movl   $0x8e2691a,0x4(%esp)
 8a6e1c3:	08 
 8a6e1c4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e1c7:	89 04 24             	mov    %eax,(%esp)
 8a6e1ca:	e8 d2 27 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e1cf:	84 c0                	test   %al,%al
 8a6e1d1:	74 0c                	je     8a6e1df <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0xdf>
 8a6e1d3:	c7 45 f4 05 00 00 00 	movl   $0x5,-0xc(%ebp)
 8a6e1da:	e9 9e 00 00 00       	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e1df:	c7 44 24 04 2f 69 e2 	movl   $0x8e2692f,0x4(%esp)
 8a6e1e6:	08 
 8a6e1e7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e1ea:	89 04 24             	mov    %eax,(%esp)
 8a6e1ed:	e8 af 27 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e1f2:	84 c0                	test   %al,%al
 8a6e1f4:	74 09                	je     8a6e1ff <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0xff>
 8a6e1f6:	c7 45 f4 06 00 00 00 	movl   $0x6,-0xc(%ebp)
 8a6e1fd:	eb 7e                	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e1ff:	c7 44 24 04 41 69 e2 	movl   $0x8e26941,0x4(%esp)
 8a6e206:	08 
 8a6e207:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e20a:	89 04 24             	mov    %eax,(%esp)
 8a6e20d:	e8 8f 27 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e212:	84 c0                	test   %al,%al
 8a6e214:	74 09                	je     8a6e21f <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x11f>
 8a6e216:	c7 45 f4 07 00 00 00 	movl   $0x7,-0xc(%ebp)
 8a6e21d:	eb 5e                	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e21f:	c7 44 24 04 52 69 e2 	movl   $0x8e26952,0x4(%esp)
 8a6e226:	08 
 8a6e227:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e22a:	89 04 24             	mov    %eax,(%esp)
 8a6e22d:	e8 6f 27 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e232:	84 c0                	test   %al,%al
 8a6e234:	74 09                	je     8a6e23f <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x13f>
 8a6e236:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
 8a6e23d:	eb 3e                	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e23f:	c7 44 24 04 67 69 e2 	movl   $0x8e26967,0x4(%esp)
 8a6e246:	08 
 8a6e247:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e24a:	89 04 24             	mov    %eax,(%esp)
 8a6e24d:	e8 4f 27 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e252:	84 c0                	test   %al,%al
 8a6e254:	74 09                	je     8a6e25f <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x15f>
 8a6e256:	c7 45 f4 09 00 00 00 	movl   $0x9,-0xc(%ebp)
 8a6e25d:	eb 1e                	jmp    8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e25f:	c7 44 24 04 7c 69 e2 	movl   $0x8e2697c,0x4(%esp)
 8a6e266:	08 
 8a6e267:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e26a:	89 04 24             	mov    %eax,(%esp)
 8a6e26d:	e8 2f 27 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e272:	84 c0                	test   %al,%al
 8a6e274:	74 07                	je     8a6e27d <_ZN10QuickParty23getRandomBuffTypeByNameERKSs+0x17d>
 8a6e276:	c7 45 f4 0a 00 00 00 	movl   $0xa,-0xc(%ebp)
 8a6e27d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a6e280:	c9                   	leave
 8a6e281:	c3                   	ret

```

```c
// QuickParty::getRandomBuffTypeByName @ 0x8a6e100

/* QuickParty::getRandomBuffTypeByName(std::string const&) */

undefined4 QuickParty::getRandomBuffTypeByName(string *param_1)

{
  bool bVar1;
  undefined4 local_10;
  
  local_10 = 0xb;
  bVar1 = std::operator==((string *)param_1,"[increase exp]");
  if (bVar1) {
    local_10 = 0;
  }
  else {
    bVar1 = std::operator==((string *)param_1,"[increase stats]");
    if (bVar1) {
      local_10 = 1;
    }
    else {
      bVar1 = std::operator==((string *)param_1,"[increase speed]");
      if (bVar1) {
        local_10 = 2;
      }
      else {
        bVar1 = std::operator==((string *)param_1,"[increase dropprob]");
        if (bVar1) {
          local_10 = 3;
        }
        else {
          bVar1 = std::operator==((string *)param_1,"[increase allattack]");
          if (bVar1) {
            local_10 = 4;
          }
          else {
            bVar1 = std::operator==((string *)param_1,"[increase allresist]");
            if (bVar1) {
              local_10 = 5;
            }
            else {
              bVar1 = std::operator==((string *)param_1,"[increase broken]");
              if (bVar1) {
                local_10 = 6;
              }
              else {
                bVar1 = std::operator==((string *)param_1,"[increase mobhp]");
                if (bVar1) {
                  local_10 = 7;
                }
                else {
                  bVar1 = std::operator==((string *)param_1,"[increase antidevil]");
                  if (bVar1) {
                    local_10 = 8;
                  }
                  else {
                    bVar1 = std::operator==((string *)param_1,"[increase coinlimit]");
                    if (bVar1) {
                      local_10 = 9;
                    }
                    else {
                      bVar1 = std::operator==((string *)param_1,"[return ticket]");
                      if (bVar1) {
                        local_10 = 10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_10;
}

```

---

## importQuickPartyScript

```asm
// === 08a6e282 QuickParty::importQuickPartyScript  [0x08a6e282-0x8a6ef15] ===
 8a6e282:	55                   	push   %ebp
 8a6e283:	89 e5                	mov    %esp,%ebp
 8a6e285:	57                   	push   %edi
 8a6e286:	56                   	push   %esi
 8a6e287:	53                   	push   %ebx
 8a6e288:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 8a6e28e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6e291:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6e295:	c7 04 24 8c 69 e2 08 	movl   $0x8e2698c,(%esp)
 8a6e29c:	e8 88 da e4 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8a6e2a1:	83 f0 01             	xor    $0x1,%eax
 8a6e2a4:	84 c0                	test   %al,%al
 8a6e2a6:	74 0a                	je     8a6e2b2 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x30>
 8a6e2a8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a6e2ad:	e9 57 0c 00 00       	jmp    8a6ef09 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc87>
 8a6e2b2:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6e2b8:	89 04 24             	mov    %eax,(%esp)
 8a6e2bb:	e8 10 83 c9 ff       	call   87065d0 <_ZNSsC1Ev>
 8a6e2c0:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6e2c6:	89 04 24             	mov    %eax,(%esp)
 8a6e2c9:	e8 02 ab c9 ff       	call   8708dd0 <_ZNSs5clearEv>
 8a6e2ce:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6e2d4:	89 04 24             	mov    %eax,(%esp)
 8a6e2d7:	e8 f4 82 c9 ff       	call   87065d0 <_ZNSsC1Ev>
 8a6e2dc:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6e2e2:	89 04 24             	mov    %eax,(%esp)
 8a6e2e5:	e8 e6 aa c9 ff       	call   8708dd0 <_ZNSs5clearEv>
 8a6e2ea:	c6 85 0f ff ff ff 00 	movb   $0x0,-0xf1(%ebp)
 8a6e2f1:	c7 85 08 ff ff ff 00 	movl   $0x0,-0xf8(%ebp)
 8a6e2f8:	00 00 00 
 8a6e2fb:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8a6e301:	89 04 24             	mov    %eax,(%esp)
 8a6e304:	e8 69 0c 00 00       	call   8a6ef72 <_ZN10QuickParty9LevelDataC1Ev>
 8a6e309:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8a6e310:	00 
 8a6e311:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6e317:	89 04 24             	mov    %eax,(%esp)
 8a6e31a:	e8 40 e5 e4 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8a6e31f:	83 f0 01             	xor    $0x1,%eax
 8a6e322:	84 c0                	test   %al,%al
 8a6e324:	0f 85 81 0b 00 00    	jne    8a6eeab <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc29>
 8a6e32a:	b8 58 05 50 09       	mov    $0x9500558,%eax
 8a6e32f:	0f b6 00             	movzbl (%eax),%eax
 8a6e332:	84 c0                	test   %al,%al
 8a6e334:	75 6e                	jne    8a6e3a4 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x122>
 8a6e336:	c7 04 24 58 05 50 09 	movl   $0x9500558,(%esp)
 8a6e33d:	e8 ee 6f cb ff       	call   8725330 <__cxa_guard_acquire>
 8a6e342:	85 c0                	test   %eax,%eax
 8a6e344:	0f 95 c0             	setne  %al
 8a6e347:	84 c0                	test   %al,%al
 8a6e349:	74 59                	je     8a6e3a4 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x122>
 8a6e34b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a6e350:	c7 04 24 68 05 50 09 	movl   $0x9500568,(%esp)
 8a6e357:	e8 78 31 68 ff       	call   80f14d4 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEEC1Ev>
 8a6e35c:	c7 04 24 58 05 50 09 	movl   $0x9500558,(%esp)
 8a6e363:	e8 e8 6e cb ff       	call   8725250 <__cxa_guard_release>
 8a6e368:	b8 7a 13 0f 08       	mov    $0x80f137a,%eax
 8a6e36d:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8a6e374:	08 
 8a6e375:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6e37c:	09 
 8a6e37d:	89 04 24             	mov    %eax,(%esp)
 8a6e380:	e8 4b fa 60 ff       	call   807ddd0 <__cxa_atexit@plt>
 8a6e385:	eb 1d                	jmp    8a6e3a4 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x122>
 8a6e387:	89 d6                	mov    %edx,%esi
 8a6e389:	89 c7                	mov    %eax,%edi
 8a6e38b:	84 db                	test   %bl,%bl
 8a6e38d:	75 0c                	jne    8a6e39b <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x119>
 8a6e38f:	c7 04 24 58 05 50 09 	movl   $0x9500558,(%esp)
 8a6e396:	e8 25 6f cb ff       	call   87252c0 <__cxa_guard_abort>
 8a6e39b:	89 f8                	mov    %edi,%eax
 8a6e39d:	89 f2                	mov    %esi,%edx
 8a6e39f:	e9 11 0b 00 00       	jmp    8a6eeb5 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc33>
 8a6e3a4:	b8 60 05 50 09       	mov    $0x9500560,%eax
 8a6e3a9:	0f b6 00             	movzbl (%eax),%eax
 8a6e3ac:	84 c0                	test   %al,%al
 8a6e3ae:	75 6e                	jne    8a6e41e <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x19c>
 8a6e3b0:	c7 04 24 60 05 50 09 	movl   $0x9500560,(%esp)
 8a6e3b7:	e8 74 6f cb ff       	call   8725330 <__cxa_guard_acquire>
 8a6e3bc:	85 c0                	test   %eax,%eax
 8a6e3be:	0f 95 c0             	setne  %al
 8a6e3c1:	84 c0                	test   %al,%al
 8a6e3c3:	74 59                	je     8a6e41e <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x19c>
 8a6e3c5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a6e3ca:	c7 04 24 80 05 50 09 	movl   $0x9500580,(%esp)
 8a6e3d1:	e8 4c 51 06 00       	call   8ad3522 <_ZN8SpinLockC1Ev>
 8a6e3d6:	c7 04 24 60 05 50 09 	movl   $0x9500560,(%esp)
 8a6e3dd:	e8 6e 6e cb ff       	call   8725250 <__cxa_guard_release>
 8a6e3e2:	b8 3e 35 ad 08       	mov    $0x8ad353e,%eax
 8a6e3e7:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8a6e3ee:	08 
 8a6e3ef:	c7 44 24 04 80 05 50 	movl   $0x9500580,0x4(%esp)
 8a6e3f6:	09 
 8a6e3f7:	89 04 24             	mov    %eax,(%esp)
 8a6e3fa:	e8 d1 f9 60 ff       	call   807ddd0 <__cxa_atexit@plt>
 8a6e3ff:	eb 1d                	jmp    8a6e41e <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x19c>
 8a6e401:	89 d6                	mov    %edx,%esi
 8a6e403:	89 c7                	mov    %eax,%edi
 8a6e405:	84 db                	test   %bl,%bl
 8a6e407:	75 0c                	jne    8a6e415 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x193>
 8a6e409:	c7 04 24 60 05 50 09 	movl   $0x9500560,(%esp)
 8a6e410:	e8 ab 6e cb ff       	call   87252c0 <__cxa_guard_abort>
 8a6e415:	89 f8                	mov    %edi,%eax
 8a6e417:	89 f2                	mov    %esi,%edx
 8a6e419:	e9 97 0a 00 00       	jmp    8a6eeb5 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc33>
 8a6e41e:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6e425:	84 c0                	test   %al,%al
 8a6e427:	0f 84 b9 00 00 00    	je     8a6e4e6 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x264>
 8a6e42d:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6e433:	89 04 24             	mov    %eax,(%esp)
 8a6e436:	e8 b5 80 c9 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8a6e43b:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 8a6e441:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8a6e447:	8d 95 1c ff ff ff    	lea    -0xe4(%ebp),%edx
 8a6e44d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6e451:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6e458:	09 
 8a6e459:	89 04 24             	mov    %eax,(%esp)
 8a6e45c:	e8 ed 30 68 ff       	call   80f154e <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE4findERS4_>
 8a6e461:	83 ec 04             	sub    $0x4,%esp
 8a6e464:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8a6e46a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6e46e:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 8a6e474:	89 04 24             	mov    %eax,(%esp)
 8a6e477:	e8 fe 30 68 ff       	call   80f157a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKPKciEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 8a6e47c:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8a6e482:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6e489:	09 
 8a6e48a:	89 04 24             	mov    %eax,(%esp)
 8a6e48d:	e8 f8 30 68 ff       	call   80f158a <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE3endEv>
 8a6e492:	83 ec 04             	sub    $0x4,%esp
 8a6e495:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8a6e49b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6e49f:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8a6e4a5:	89 04 24             	mov    %eax,(%esp)
 8a6e4a8:	e8 cd 30 68 ff       	call   80f157a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKPKciEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 8a6e4ad:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8a6e4b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6e4b7:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 8a6e4bd:	89 04 24             	mov    %eax,(%esp)
 8a6e4c0:	e8 eb 30 68 ff       	call   80f15b0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKPKciEEneERKS5_>
 8a6e4c5:	84 c0                	test   %al,%al
 8a6e4c7:	74 13                	je     8a6e4dc <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x25a>
 8a6e4c9:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 8a6e4cf:	89 04 24             	mov    %eax,(%esp)
 8a6e4d2:	e8 ed 30 68 ff       	call   80f15c4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKPKciEEptEv>
 8a6e4d7:	8b 40 04             	mov    0x4(%eax),%eax
 8a6e4da:	eb 05                	jmp    8a6e4e1 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x25f>
 8a6e4dc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8a6e4e1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8a6e4e4:	eb 30                	jmp    8a6e516 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x294>
 8a6e4e6:	c7 04 24 80 05 50 09 	movl   $0x9500580,(%esp)
 8a6e4ed:	e8 60 50 06 00       	call   8ad3552 <_ZN8SpinLock5enterEv>
 8a6e4f2:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6e4f9:	84 c0                	test   %al,%al
 8a6e4fb:	74 12                	je     8a6e50f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x28d>
 8a6e4fd:	c7 04 24 80 05 50 09 	movl   $0x9500580,(%esp)
 8a6e504:	e8 7d 50 06 00       	call   8ad3586 <_ZN8SpinLock5leaveEv>
 8a6e509:	90                   	nop
 8a6e50a:	e9 1b fe ff ff       	jmp    8a6e32a <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xa8>
 8a6e50f:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8a6e516:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8a6e519:	83 f8 4d             	cmp    $0x4d,%eax
 8a6e51c:	0f 84 5d 01 00 00    	je     8a6e67f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x3fd>
 8a6e522:	83 f8 4d             	cmp    $0x4d,%eax
 8a6e525:	7f 17                	jg     8a6e53e <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x2bc>
 8a6e527:	83 f8 3e             	cmp    $0x3e,%eax
 8a6e52a:	74 4d                	je     8a6e579 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x2f7>
 8a6e52c:	83 f8 41             	cmp    $0x41,%eax
 8a6e52f:	0f 84 ab 00 00 00    	je     8a6e5e0 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x35e>
 8a6e535:	85 c0                	test   %eax,%eax
 8a6e537:	74 40                	je     8a6e579 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x2f7>
 8a6e539:	e9 41 09 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6e53e:	3d 8f 00 00 00       	cmp    $0x8f,%eax
 8a6e543:	0f 84 51 04 00 00    	je     8a6e99a <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x718>
 8a6e549:	3d 8f 00 00 00       	cmp    $0x8f,%eax
 8a6e54e:	7f 0e                	jg     8a6e55e <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x2dc>
 8a6e550:	83 f8 59             	cmp    $0x59,%eax
 8a6e553:	0f 84 c2 01 00 00    	je     8a6e71b <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x499>
 8a6e559:	e9 21 09 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6e55e:	3d b8 00 00 00       	cmp    $0xb8,%eax
 8a6e563:	0f 84 7e 06 00 00    	je     8a6ebe7 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x965>
 8a6e569:	3d ce 00 00 00       	cmp    $0xce,%eax
 8a6e56e:	0f 84 53 07 00 00    	je     8a6ecc7 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xa45>
 8a6e574:	e9 06 09 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6e579:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6e580:	83 f0 01             	xor    $0x1,%eax
 8a6e583:	84 c0                	test   %al,%al
 8a6e585:	74 4f                	je     8a6e5d6 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x354>
 8a6e587:	c7 85 38 ff ff ff 3e 	movl   $0x3e,-0xc8(%ebp)
 8a6e58e:	00 00 00 
 8a6e591:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8a6e597:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a6e59b:	c7 44 24 04 8d 69 e2 	movl   $0x8e2698d,0x4(%esp)
 8a6e5a2:	08 
 8a6e5a3:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 8a6e5a9:	89 04 24             	mov    %eax,(%esp)
 8a6e5ac:	e8 e3 fb 83 ff       	call   82ae194 <_ZNSt4pairIKPKciEC1IRA15_S0_iEEOT_OT0_>
 8a6e5b1:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8a6e5b7:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 8a6e5bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6e5c1:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6e5c8:	09 
 8a6e5c9:	89 04 24             	mov    %eax,(%esp)
 8a6e5cc:	e8 2f 30 68 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 8a6e5d1:	83 ec 04             	sub    $0x4,%esp
 8a6e5d4:	eb 0a                	jmp    8a6e5e0 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x35e>
 8a6e5d6:	bb 01 00 00 00       	mov    $0x1,%ebx
 8a6e5db:	e9 ed 08 00 00       	jmp    8a6eecd <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc4b>
 8a6e5e0:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6e5e7:	83 f0 01             	xor    $0x1,%eax
 8a6e5ea:	84 c0                	test   %al,%al
 8a6e5ec:	74 4f                	je     8a6e63d <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x3bb>
 8a6e5ee:	c7 85 4c ff ff ff 41 	movl   $0x41,-0xb4(%ebp)
 8a6e5f5:	00 00 00 
 8a6e5f8:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8a6e5fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a6e602:	c7 44 24 04 9c 69 e2 	movl   $0x8e2699c,0x4(%esp)
 8a6e609:	08 
 8a6e60a:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8a6e610:	89 04 24             	mov    %eax,(%esp)
 8a6e613:	e8 7a fc 83 ff       	call   82ae292 <_ZNSt4pairIKPKciEC1IRA23_S0_iEEOT_OT0_>
 8a6e618:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8a6e61e:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 8a6e624:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6e628:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6e62f:	09 
 8a6e630:	89 04 24             	mov    %eax,(%esp)
 8a6e633:	e8 c8 2f 68 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 8a6e638:	83 ec 04             	sub    $0x4,%esp
 8a6e63b:	eb 42                	jmp    8a6e67f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x3fd>
 8a6e63d:	8d 85 0f ff ff ff    	lea    -0xf1(%ebp),%eax
 8a6e643:	89 04 24             	mov    %eax,(%esp)
 8a6e646:	e8 30 dd e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6e64b:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6e651:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6e658:	83 f0 01             	xor    $0x1,%eax
 8a6e65b:	84 c0                	test   %al,%al
 8a6e65d:	74 06                	je     8a6e665 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x3e3>
 8a6e65f:	90                   	nop
 8a6e660:	e9 1a 08 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6e665:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6e668:	8d 50 0c             	lea    0xc(%eax),%edx
 8a6e66b:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 8a6e671:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6e675:	89 14 24             	mov    %edx,(%esp)
 8a6e678:	e8 a9 2a 6a ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8a6e67d:	eb be                	jmp    8a6e63d <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x3bb>
 8a6e67f:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6e686:	83 f0 01             	xor    $0x1,%eax
 8a6e689:	84 c0                	test   %al,%al
 8a6e68b:	74 4f                	je     8a6e6dc <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x45a>
 8a6e68d:	c7 85 60 ff ff ff 4d 	movl   $0x4d,-0xa0(%ebp)
 8a6e694:	00 00 00 
 8a6e697:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8a6e69d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a6e6a1:	c7 44 24 04 b3 69 e2 	movl   $0x8e269b3,0x4(%esp)
 8a6e6a8:	08 
 8a6e6a9:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8a6e6af:	89 04 24             	mov    %eax,(%esp)
 8a6e6b2:	e8 b5 f8 83 ff       	call   82adf6c <_ZNSt4pairIKPKciEC1IRA16_S0_iEEOT_OT0_>
 8a6e6b7:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8a6e6bd:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 8a6e6c3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6e6c7:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6e6ce:	09 
 8a6e6cf:	89 04 24             	mov    %eax,(%esp)
 8a6e6d2:	e8 29 2f 68 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 8a6e6d7:	83 ec 04             	sub    $0x4,%esp
 8a6e6da:	eb 3f                	jmp    8a6e71b <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x499>
 8a6e6dc:	8d 85 0f ff ff ff    	lea    -0xf1(%ebp),%eax
 8a6e6e2:	89 04 24             	mov    %eax,(%esp)
 8a6e6e5:	e8 91 dc e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6e6ea:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6e6f0:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6e6f7:	83 f0 01             	xor    $0x1,%eax
 8a6e6fa:	84 c0                	test   %al,%al
 8a6e6fc:	74 06                	je     8a6e704 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x482>
 8a6e6fe:	90                   	nop
 8a6e6ff:	e9 7b 07 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6e704:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6e707:	8d 95 08 ff ff ff    	lea    -0xf8(%ebp),%edx
 8a6e70d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6e711:	89 04 24             	mov    %eax,(%esp)
 8a6e714:	e8 0d 2a 6a ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8a6e719:	eb c1                	jmp    8a6e6dc <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x45a>
 8a6e71b:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6e722:	83 f0 01             	xor    $0x1,%eax
 8a6e725:	84 c0                	test   %al,%al
 8a6e727:	0f 84 45 02 00 00    	je     8a6e972 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x6f0>
 8a6e72d:	c7 85 74 ff ff ff 59 	movl   $0x59,-0x8c(%ebp)
 8a6e734:	00 00 00 
 8a6e737:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8a6e73d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a6e741:	c7 44 24 04 c3 69 e2 	movl   $0x8e269c3,0x4(%esp)
 8a6e748:	08 
 8a6e749:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8a6e74f:	89 04 24             	mov    %eax,(%esp)
 8a6e752:	e8 3d fa 83 ff       	call   82ae194 <_ZNSt4pairIKPKciEC1IRA15_S0_iEEOT_OT0_>
 8a6e757:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8a6e75d:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 8a6e763:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6e767:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6e76e:	09 
 8a6e76f:	89 04 24             	mov    %eax,(%esp)
 8a6e772:	e8 89 2e 68 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 8a6e777:	83 ec 04             	sub    $0x4,%esp
 8a6e77a:	e9 1b 02 00 00       	jmp    8a6e99a <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x718>
 8a6e77f:	c7 44 24 04 d2 69 e2 	movl   $0x8e269d2,0x4(%esp)
 8a6e786:	08 
 8a6e787:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6e78d:	89 04 24             	mov    %eax,(%esp)
 8a6e790:	e8 0c 22 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e795:	84 c0                	test   %al,%al
 8a6e797:	74 05                	je     8a6e79e <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x51c>
 8a6e799:	e9 f7 01 00 00       	jmp    8a6e995 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x713>
 8a6e79e:	c7 44 24 04 e2 69 e2 	movl   $0x8e269e2,0x4(%esp)
 8a6e7a5:	08 
 8a6e7a6:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6e7ac:	89 04 24             	mov    %eax,(%esp)
 8a6e7af:	e8 ed 21 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e7b4:	84 c0                	test   %al,%al
 8a6e7b6:	0f 84 ae 00 00 00    	je     8a6e86a <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x5e8>
 8a6e7bc:	8d 85 0f ff ff ff    	lea    -0xf1(%ebp),%eax
 8a6e7c2:	89 04 24             	mov    %eax,(%esp)
 8a6e7c5:	e8 b1 db e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6e7ca:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6e7d0:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6e7d7:	83 f0 01             	xor    $0x1,%eax
 8a6e7da:	84 c0                	test   %al,%al
 8a6e7dc:	74 06                	je     8a6e7e4 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x562>
 8a6e7de:	90                   	nop
 8a6e7df:	e9 8e 01 00 00       	jmp    8a6e972 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x6f0>
 8a6e7e4:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a6e7eb:	e8 8b db e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6e7f0:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6e7f6:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 8a6e7fc:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 8a6e802:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6e808:	89 04 24             	mov    %eax,(%esp)
 8a6e80b:	e8 92 df e4 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a6e810:	88 85 0f ff ff ff    	mov    %al,-0xf1(%ebp)
 8a6e816:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6e81d:	84 c0                	test   %al,%al
 8a6e81f:	74 21                	je     8a6e842 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x5c0>
 8a6e821:	c7 44 24 04 f7 69 e2 	movl   $0x8e269f7,0x4(%esp)
 8a6e828:	08 
 8a6e829:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6e82f:	89 04 24             	mov    %eax,(%esp)
 8a6e832:	e8 6a 21 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e837:	84 c0                	test   %al,%al
 8a6e839:	74 07                	je     8a6e842 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x5c0>
 8a6e83b:	b8 01 00 00 00       	mov    $0x1,%eax
 8a6e840:	eb 05                	jmp    8a6e847 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x5c5>
 8a6e842:	b8 00 00 00 00       	mov    $0x0,%eax
 8a6e847:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 8a6e84d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6e850:	8d 50 18             	lea    0x18(%eax),%edx
 8a6e853:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8a6e859:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6e85d:	89 14 24             	mov    %edx,(%esp)
 8a6e860:	e8 c5 07 00 00       	call   8a6f02a <_ZNSt6vectorIN10QuickParty9LevelDataESaIS1_EE9push_backERKS1_>
 8a6e865:	e9 52 ff ff ff       	jmp    8a6e7bc <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x53a>
 8a6e86a:	c7 44 24 04 f9 69 e2 	movl   $0x8e269f9,0x4(%esp)
 8a6e871:	08 
 8a6e872:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6e878:	89 04 24             	mov    %eax,(%esp)
 8a6e87b:	e8 21 21 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6e880:	84 c0                	test   %al,%al
 8a6e882:	0f 84 ea 00 00 00    	je     8a6e972 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x6f0>
 8a6e888:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6e88e:	89 04 24             	mov    %eax,(%esp)
 8a6e891:	e8 0c df e4 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a6e896:	88 85 0f ff ff ff    	mov    %al,-0xf1(%ebp)
 8a6e89c:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6e8a3:	83 f0 01             	xor    $0x1,%eax
 8a6e8a6:	84 c0                	test   %al,%al
 8a6e8a8:	74 05                	je     8a6e8af <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x62d>
 8a6e8aa:	e9 e6 00 00 00       	jmp    8a6e995 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x713>
 8a6e8af:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a6e8b6:	e8 c0 da e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6e8bb:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6e8c1:	8b 95 08 ff ff ff    	mov    -0xf8(%ebp),%edx
 8a6e8c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6e8ca:	89 50 30             	mov    %edx,0x30(%eax)
 8a6e8cd:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a6e8d4:	e8 a2 da e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6e8d9:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6e8df:	8b 95 08 ff ff ff    	mov    -0xf8(%ebp),%edx
 8a6e8e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6e8e8:	89 50 34             	mov    %edx,0x34(%eax)
 8a6e8eb:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8a6e8f1:	89 04 24             	mov    %eax,(%esp)
 8a6e8f4:	e8 91 06 00 00       	call   8a6ef8a <_ZN10QuickParty13LevelDataHellC1Ev>
 8a6e8f9:	8d 85 0f ff ff ff    	lea    -0xf1(%ebp),%eax
 8a6e8ff:	89 04 24             	mov    %eax,(%esp)
 8a6e902:	e8 74 da e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6e907:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6e90d:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6e914:	83 f0 01             	xor    $0x1,%eax
 8a6e917:	84 c0                	test   %al,%al
 8a6e919:	75 56                	jne    8a6e971 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x6ef>
 8a6e91b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a6e922:	e8 54 da e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6e927:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6e92d:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 8a6e933:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 8a6e939:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a6e940:	e8 36 da e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6e945:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6e94b:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 8a6e951:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 8a6e957:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6e95a:	8d 50 24             	lea    0x24(%eax),%edx
 8a6e95d:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8a6e963:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6e967:	89 14 24             	mov    %edx,(%esp)
 8a6e96a:	e8 2f 07 00 00       	call   8a6f09e <_ZNSt6vectorIN10QuickParty13LevelDataHellESaIS1_EE9push_backERKS1_>
 8a6e96f:	eb 88                	jmp    8a6e8f9 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x677>
 8a6e971:	90                   	nop
 8a6e972:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8a6e979:	00 
 8a6e97a:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6e980:	89 04 24             	mov    %eax,(%esp)
 8a6e983:	e8 d7 de e4 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8a6e988:	84 c0                	test   %al,%al
 8a6e98a:	0f 85 ef fd ff ff    	jne    8a6e77f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x4fd>
 8a6e990:	e9 ea 04 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6e995:	e9 e5 04 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6e99a:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6e9a1:	83 f0 01             	xor    $0x1,%eax
 8a6e9a4:	84 c0                	test   %al,%al
 8a6e9a6:	74 47                	je     8a6e9ef <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x76d>
 8a6e9a8:	c7 45 88 8f 00 00 00 	movl   $0x8f,-0x78(%ebp)
 8a6e9af:	8d 45 88             	lea    -0x78(%ebp),%eax
 8a6e9b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a6e9b6:	c7 44 24 04 06 6a e2 	movl   $0x8e26a06,0x4(%esp)
 8a6e9bd:	08 
 8a6e9be:	8d 45 80             	lea    -0x80(%ebp),%eax
 8a6e9c1:	89 04 24             	mov    %eax,(%esp)
 8a6e9c4:	e8 a3 f5 83 ff       	call   82adf6c <_ZNSt4pairIKPKciEC1IRA16_S0_iEEOT_OT0_>
 8a6e9c9:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8a6e9cf:	8d 55 80             	lea    -0x80(%ebp),%edx
 8a6e9d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6e9d6:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6e9dd:	09 
 8a6e9de:	89 04 24             	mov    %eax,(%esp)
 8a6e9e1:	e8 1a 2c 68 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 8a6e9e6:	83 ec 04             	sub    $0x4,%esp
 8a6e9e9:	e9 f9 01 00 00       	jmp    8a6ebe7 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x965>
 8a6e9ee:	90                   	nop
 8a6e9ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8a6e9f6:	00 
 8a6e9f7:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6e9fd:	89 04 24             	mov    %eax,(%esp)
 8a6ea00:	e8 5a de e4 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8a6ea05:	83 f0 01             	xor    $0x1,%eax
 8a6ea08:	84 c0                	test   %al,%al
 8a6ea0a:	74 05                	je     8a6ea11 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x78f>
 8a6ea0c:	e9 d1 01 00 00       	jmp    8a6ebe2 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x960>
 8a6ea11:	c7 44 24 04 16 6a e2 	movl   $0x8e26a16,0x4(%esp)
 8a6ea18:	08 
 8a6ea19:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6ea1f:	89 04 24             	mov    %eax,(%esp)
 8a6ea22:	e8 7a 1f 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6ea27:	84 c0                	test   %al,%al
 8a6ea29:	74 05                	je     8a6ea30 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x7ae>
 8a6ea2b:	e9 b2 01 00 00       	jmp    8a6ebe2 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x960>
 8a6ea30:	c7 44 24 04 27 6a e2 	movl   $0x8e26a27,0x4(%esp)
 8a6ea37:	08 
 8a6ea38:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6ea3e:	89 04 24             	mov    %eax,(%esp)
 8a6ea41:	e8 5b 1f 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6ea46:	84 c0                	test   %al,%al
 8a6ea48:	74 a4                	je     8a6e9ee <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x76c>
 8a6ea4a:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ea50:	89 04 24             	mov    %eax,(%esp)
 8a6ea53:	e8 4a dd e4 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a6ea58:	88 85 0f ff ff ff    	mov    %al,-0xf1(%ebp)
 8a6ea5e:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6ea65:	83 f0 01             	xor    $0x1,%eax
 8a6ea68:	84 c0                	test   %al,%al
 8a6ea6a:	74 05                	je     8a6ea71 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x7ef>
 8a6ea6c:	e9 71 01 00 00       	jmp    8a6ebe2 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x960>
 8a6ea71:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8a6ea77:	89 04 24             	mov    %eax,(%esp)
 8a6ea7a:	e8 23 05 00 00       	call   8a6efa2 <_ZN10QuickParty21LevelDataRandomRewardC1Ev>
 8a6ea7f:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ea85:	89 04 24             	mov    %eax,(%esp)
 8a6ea88:	e8 73 f6 ff ff       	call   8a6e100 <_ZN10QuickParty23getRandomBuffTypeByNameERKSs>
 8a6ea8d:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 8a6ea93:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8a6ea99:	83 c0 04             	add    $0x4,%eax
 8a6ea9c:	89 04 24             	mov    %eax,(%esp)
 8a6ea9f:	e8 fe dc e4 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a6eaa4:	8d 85 0f ff ff ff    	lea    -0xf1(%ebp),%eax
 8a6eaaa:	89 04 24             	mov    %eax,(%esp)
 8a6eaad:	e8 c9 d8 e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6eab2:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6eab8:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6eabf:	83 f0 01             	xor    $0x1,%eax
 8a6eac2:	84 c0                	test   %al,%al
 8a6eac4:	0f 85 89 00 00 00    	jne    8a6eb53 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x8d1>
 8a6eaca:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a6ead1:	e8 a5 d8 e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6ead6:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6eadc:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 8a6eae2:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 8a6eae8:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6eaee:	89 04 24             	mov    %eax,(%esp)
 8a6eaf1:	e8 ac dc e4 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a6eaf6:	88 85 0f ff ff ff    	mov    %al,-0xf1(%ebp)
 8a6eafc:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6eb03:	84 c0                	test   %al,%al
 8a6eb05:	74 21                	je     8a6eb28 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x8a6>
 8a6eb07:	c7 44 24 04 f7 69 e2 	movl   $0x8e269f7,0x4(%esp)
 8a6eb0e:	08 
 8a6eb0f:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6eb15:	89 04 24             	mov    %eax,(%esp)
 8a6eb18:	e8 84 1e 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6eb1d:	84 c0                	test   %al,%al
 8a6eb1f:	74 07                	je     8a6eb28 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x8a6>
 8a6eb21:	b8 01 00 00 00       	mov    $0x1,%eax
 8a6eb26:	eb 05                	jmp    8a6eb2d <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x8ab>
 8a6eb28:	b8 00 00 00 00       	mov    $0x0,%eax
 8a6eb2d:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 8a6eb33:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8a6eb39:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6eb3d:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8a6eb43:	83 c0 08             	add    $0x8,%eax
 8a6eb46:	89 04 24             	mov    %eax,(%esp)
 8a6eb49:	e8 dc 04 00 00       	call   8a6f02a <_ZNSt6vectorIN10QuickParty9LevelDataESaIS1_EE9push_backERKS1_>
 8a6eb4e:	e9 51 ff ff ff       	jmp    8a6eaa4 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x822>
 8a6eb53:	90                   	nop
 8a6eb54:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8a6eb5a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a6eb5e:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8a6eb64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6eb68:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8a6eb6b:	89 04 24             	mov    %eax,(%esp)
 8a6eb6e:	e8 09 06 00 00       	call   8a6f17c <_ZNSt4pairIKN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardEEC1IRS1_RS3_EEOT_OT0_>
 8a6eb73:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6eb76:	8d 48 38             	lea    0x38(%eax),%ecx
 8a6eb79:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8a6eb7c:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8a6eb7f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6eb83:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a6eb87:	89 04 24             	mov    %eax,(%esp)
 8a6eb8a:	e8 25 06 00 00       	call   8a6f1b4 <_ZNSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE6insertERKS7_>
 8a6eb8f:	83 ec 04             	sub    $0x4,%esp
 8a6eb92:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8a6eb95:	89 04 24             	mov    %eax,(%esp)
 8a6eb98:	e8 2d fc 7f ff       	call   826e7ca <_ZNSt4pairIKN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardEED1Ev>
 8a6eb9d:	eb 30                	jmp    8a6ebcf <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x94d>
 8a6eb9f:	89 d3                	mov    %edx,%ebx
 8a6eba1:	89 c6                	mov    %eax,%esi
 8a6eba3:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8a6eba6:	89 04 24             	mov    %eax,(%esp)
 8a6eba9:	e8 1c fc 7f ff       	call   826e7ca <_ZNSt4pairIKN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardEED1Ev>
 8a6ebae:	89 f0                	mov    %esi,%eax
 8a6ebb0:	89 da                	mov    %ebx,%edx
 8a6ebb2:	eb 00                	jmp    8a6ebb4 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x932>
 8a6ebb4:	89 d3                	mov    %edx,%ebx
 8a6ebb6:	89 c6                	mov    %eax,%esi
 8a6ebb8:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8a6ebbe:	89 04 24             	mov    %eax,(%esp)
 8a6ebc1:	e8 b8 fb 7f ff       	call   826e77e <_ZN10QuickParty21LevelDataRandomRewardD1Ev>
 8a6ebc6:	89 f0                	mov    %esi,%eax
 8a6ebc8:	89 da                	mov    %ebx,%edx
 8a6ebca:	e9 e6 02 00 00       	jmp    8a6eeb5 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc33>
 8a6ebcf:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8a6ebd5:	89 04 24             	mov    %eax,(%esp)
 8a6ebd8:	e8 a1 fb 7f ff       	call   826e77e <_ZN10QuickParty21LevelDataRandomRewardD1Ev>
 8a6ebdd:	e9 0d fe ff ff       	jmp    8a6e9ef <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x76d>
 8a6ebe2:	e9 98 02 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6ebe7:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6ebee:	83 f0 01             	xor    $0x1,%eax
 8a6ebf1:	84 c0                	test   %al,%al
 8a6ebf3:	74 43                	je     8a6ec38 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x9b6>
 8a6ebf5:	c7 45 bc b8 00 00 00 	movl   $0xb8,-0x44(%ebp)
 8a6ebfc:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8a6ebff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a6ec03:	c7 44 24 04 30 6a e2 	movl   $0x8e26a30,0x4(%esp)
 8a6ec0a:	08 
 8a6ec0b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a6ec0e:	89 04 24             	mov    %eax,(%esp)
 8a6ec11:	e8 f4 f4 83 ff       	call   82ae10a <_ZNSt4pairIKPKciEC1IRA21_S0_iEEOT_OT0_>
 8a6ec16:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8a6ec19:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8a6ec1c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6ec20:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6ec27:	09 
 8a6ec28:	89 04 24             	mov    %eax,(%esp)
 8a6ec2b:	e8 d0 29 68 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 8a6ec30:	83 ec 04             	sub    $0x4,%esp
 8a6ec33:	e9 8f 00 00 00       	jmp    8a6ecc7 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xa45>
 8a6ec38:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ec3e:	89 04 24             	mov    %eax,(%esp)
 8a6ec41:	e8 5c db e4 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a6ec46:	88 85 0f ff ff ff    	mov    %al,-0xf1(%ebp)
 8a6ec4c:	0f b6 85 0f ff ff ff 	movzbl -0xf1(%ebp),%eax
 8a6ec53:	83 f0 01             	xor    $0x1,%eax
 8a6ec56:	84 c0                	test   %al,%al
 8a6ec58:	74 06                	je     8a6ec60 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x9de>
 8a6ec5a:	90                   	nop
 8a6ec5b:	e9 1f 02 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6ec60:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ec66:	89 04 24             	mov    %eax,(%esp)
 8a6ec69:	e8 92 f4 ff ff       	call   8a6e100 <_ZN10QuickParty23getRandomBuffTypeByNameERKSs>
 8a6ec6e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8a6ec71:	83 7d d8 0a          	cmpl   $0xa,-0x28(%ebp)
 8a6ec75:	7e 03                	jle    8a6ec7a <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x9f8>
 8a6ec77:	90                   	nop
 8a6ec78:	eb be                	jmp    8a6ec38 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x9b6>
 8a6ec7a:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8a6ec81:	eb 34                	jmp    8a6ecb7 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xa35>
 8a6ec83:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8a6ec8a:	e8 ec d6 e4 ff       	call   88bc37b <_Z7ScanIntPb>
 8a6ec8f:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8a6ec95:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8a6ec98:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8a6ec9b:	8b 9d 08 ff ff ff    	mov    -0xf8(%ebp),%ebx
 8a6eca1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8a6eca4:	89 d0                	mov    %edx,%eax
 8a6eca6:	c1 e0 03             	shl    $0x3,%eax
 8a6eca9:	29 d0                	sub    %edx,%eax
 8a6ecab:	01 f0                	add    %esi,%eax
 8a6ecad:	83 c0 14             	add    $0x14,%eax
 8a6ecb0:	89 1c 81             	mov    %ebx,(%ecx,%eax,4)
 8a6ecb3:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8a6ecb7:	83 7d dc 06          	cmpl   $0x6,-0x24(%ebp)
 8a6ecbb:	0f 9e c0             	setle  %al
 8a6ecbe:	84 c0                	test   %al,%al
 8a6ecc0:	75 c1                	jne    8a6ec83 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xa01>
 8a6ecc2:	e9 71 ff ff ff       	jmp    8a6ec38 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x9b6>
 8a6ecc7:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6ecce:	83 f0 01             	xor    $0x1,%eax
 8a6ecd1:	84 c0                	test   %al,%al
 8a6ecd3:	0f 84 84 01 00 00    	je     8a6ee5d <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbdb>
 8a6ecd9:	c7 45 d0 ce 00 00 00 	movl   $0xce,-0x30(%ebp)
 8a6ece0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8a6ece3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a6ece7:	c7 44 24 04 45 6a e2 	movl   $0x8e26a45,0x4(%esp)
 8a6ecee:	08 
 8a6ecef:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a6ecf2:	89 04 24             	mov    %eax,(%esp)
 8a6ecf5:	e8 58 f3 83 ff       	call   82ae052 <_ZNSt4pairIKPKciEC1IRA20_S0_iEEOT_OT0_>
 8a6ecfa:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a6ecfd:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8a6ed00:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6ed04:	c7 44 24 04 68 05 50 	movl   $0x9500568,0x4(%esp)
 8a6ed0b:	09 
 8a6ed0c:	89 04 24             	mov    %eax,(%esp)
 8a6ed0f:	e8 ec 28 68 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 8a6ed14:	83 ec 04             	sub    $0x4,%esp
 8a6ed17:	e9 63 01 00 00       	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6ed1c:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 8a6ed23:	c7 44 24 04 59 6a e2 	movl   $0x8e26a59,0x4(%esp)
 8a6ed2a:	08 
 8a6ed2b:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ed31:	89 04 24             	mov    %eax,(%esp)
 8a6ed34:	e8 68 1c 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6ed39:	84 c0                	test   %al,%al
 8a6ed3b:	74 09                	je     8a6ed46 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xac4>
 8a6ed3d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8a6ed44:	eb 25                	jmp    8a6ed6b <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xae9>
 8a6ed46:	c7 44 24 04 62 6a e2 	movl   $0x8e26a62,0x4(%esp)
 8a6ed4d:	08 
 8a6ed4e:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ed54:	89 04 24             	mov    %eax,(%esp)
 8a6ed57:	e8 45 1c 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6ed5c:	84 c0                	test   %al,%al
 8a6ed5e:	0f 84 11 01 00 00    	je     8a6ee75 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbf3>
 8a6ed64:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 8a6ed6b:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ed71:	89 04 24             	mov    %eax,(%esp)
 8a6ed74:	e8 29 da e4 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a6ed79:	83 f0 01             	xor    $0x1,%eax
 8a6ed7c:	84 c0                	test   %al,%al
 8a6ed7e:	0f 85 f4 00 00 00    	jne    8a6ee78 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbf6>
 8a6ed84:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 8a6ed8b:	c7 44 24 04 6c 6a e2 	movl   $0x8e26a6c,0x4(%esp)
 8a6ed92:	08 
 8a6ed93:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ed99:	89 04 24             	mov    %eax,(%esp)
 8a6ed9c:	e8 00 1c 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6eda1:	84 c0                	test   %al,%al
 8a6eda3:	74 09                	je     8a6edae <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xb2c>
 8a6eda5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8a6edac:	eb 67                	jmp    8a6ee15 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xb93>
 8a6edae:	c7 44 24 04 73 6a e2 	movl   $0x8e26a73,0x4(%esp)
 8a6edb5:	08 
 8a6edb6:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6edbc:	89 04 24             	mov    %eax,(%esp)
 8a6edbf:	e8 dd 1b 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6edc4:	84 c0                	test   %al,%al
 8a6edc6:	74 09                	je     8a6edd1 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xb4f>
 8a6edc8:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 8a6edcf:	eb 44                	jmp    8a6ee15 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xb93>
 8a6edd1:	c7 44 24 04 7c 6a e2 	movl   $0x8e26a7c,0x4(%esp)
 8a6edd8:	08 
 8a6edd9:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6eddf:	89 04 24             	mov    %eax,(%esp)
 8a6ede2:	e8 ba 1b 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6ede7:	84 c0                	test   %al,%al
 8a6ede9:	74 09                	je     8a6edf4 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xb72>
 8a6edeb:	c7 45 e4 02 00 00 00 	movl   $0x2,-0x1c(%ebp)
 8a6edf2:	eb 21                	jmp    8a6ee15 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xb93>
 8a6edf4:	c7 44 24 04 83 6a e2 	movl   $0x8e26a83,0x4(%esp)
 8a6edfb:	08 
 8a6edfc:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ee02:	89 04 24             	mov    %eax,(%esp)
 8a6ee05:	e8 97 1b 61 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a6ee0a:	84 c0                	test   %al,%al
 8a6ee0c:	74 6d                	je     8a6ee7b <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbf9>
 8a6ee0e:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 8a6ee15:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 8a6ee1b:	89 04 24             	mov    %eax,(%esp)
 8a6ee1e:	e8 01 d6 e4 ff       	call   88bc424 <_Z7ScanIntPi>
 8a6ee23:	83 f0 01             	xor    $0x1,%eax
 8a6ee26:	84 c0                	test   %al,%al
 8a6ee28:	75 54                	jne    8a6ee7e <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfc>
 8a6ee2a:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8a6ee2e:	78 2d                	js     8a6ee5d <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbdb>
 8a6ee30:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 8a6ee34:	7f 27                	jg     8a6ee5d <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbdb>
 8a6ee36:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8a6ee3a:	78 21                	js     8a6ee5d <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbdb>
 8a6ee3c:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 8a6ee40:	7f 1b                	jg     8a6ee5d <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbdb>
 8a6ee42:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8a6ee45:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8a6ee48:	8b 95 08 ff ff ff    	mov    -0xf8(%ebp),%edx
 8a6ee4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6ee51:	c1 e3 02             	shl    $0x2,%ebx
 8a6ee54:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 8a6ee57:	83 c1 68             	add    $0x68,%ecx
 8a6ee5a:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 8a6ee5d:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6ee63:	89 04 24             	mov    %eax,(%esp)
 8a6ee66:	e8 37 d9 e4 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8a6ee6b:	84 c0                	test   %al,%al
 8a6ee6d:	0f 85 a9 fe ff ff    	jne    8a6ed1c <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xa9a>
 8a6ee73:	eb 0a                	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6ee75:	90                   	nop
 8a6ee76:	eb 07                	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6ee78:	90                   	nop
 8a6ee79:	eb 04                	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6ee7b:	90                   	nop
 8a6ee7c:	eb 01                	jmp    8a6ee7f <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xbfd>
 8a6ee7e:	90                   	nop
 8a6ee7f:	0f b6 05 84 05 50 09 	movzbl 0x9500584,%eax
 8a6ee86:	83 f0 01             	xor    $0x1,%eax
 8a6ee89:	84 c0                	test   %al,%al
 8a6ee8b:	74 18                	je     8a6eea5 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc23>
 8a6ee8d:	c7 04 24 80 05 50 09 	movl   $0x9500580,(%esp)
 8a6ee94:	e8 ed 46 06 00       	call   8ad3586 <_ZN8SpinLock5leaveEv>
 8a6ee99:	c6 05 84 05 50 09 01 	movb   $0x1,0x9500584
 8a6eea0:	e9 85 f4 ff ff       	jmp    8a6e32a <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xa8>
 8a6eea5:	90                   	nop
 8a6eea6:	e9 5e f4 ff ff       	jmp    8a6e309 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0x87>
 8a6eeab:	90                   	nop
 8a6eeac:	0f b6 9d 0f ff ff ff 	movzbl -0xf1(%ebp),%ebx
 8a6eeb3:	eb 18                	jmp    8a6eecd <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc4b>
 8a6eeb5:	89 d3                	mov    %edx,%ebx
 8a6eeb7:	89 c6                	mov    %eax,%esi
 8a6eeb9:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6eebf:	89 04 24             	mov    %eax,(%esp)
 8a6eec2:	e8 19 8d c9 ff       	call   8707be0 <_ZNSsD1Ev>
 8a6eec7:	89 f0                	mov    %esi,%eax
 8a6eec9:	89 da                	mov    %ebx,%edx
 8a6eecb:	eb 10                	jmp    8a6eedd <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc5b>
 8a6eecd:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a6eed3:	89 04 24             	mov    %eax,(%esp)
 8a6eed6:	e8 05 8d c9 ff       	call   8707be0 <_ZNSsD1Ev>
 8a6eedb:	eb 1e                	jmp    8a6eefb <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE+0xc79>
 8a6eedd:	89 d3                	mov    %edx,%ebx
 8a6eedf:	89 c6                	mov    %eax,%esi
 8a6eee1:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6eee7:	89 04 24             	mov    %eax,(%esp)
 8a6eeea:	e8 f1 8c c9 ff       	call   8707be0 <_ZNSsD1Ev>
 8a6eeef:	89 f0                	mov    %esi,%eax
 8a6eef1:	89 da                	mov    %ebx,%edx
 8a6eef3:	89 04 24             	mov    %eax,(%esp)
 8a6eef6:	e8 55 48 07 00       	call   8ae3750 <_Unwind_Resume>
 8a6eefb:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8a6ef01:	89 04 24             	mov    %eax,(%esp)
 8a6ef04:	e8 d7 8c c9 ff       	call   8707be0 <_ZNSsD1Ev>
 8a6ef09:	89 d8                	mov    %ebx,%eax
 8a6ef0b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8a6ef0e:	83 c4 00             	add    $0x0,%esp
 8a6ef11:	5b                   	pop    %ebx
 8a6ef12:	5e                   	pop    %esi
 8a6ef13:	5f                   	pop    %edi
 8a6ef14:	5d                   	pop    %ebp
 8a6ef15:	c3                   	ret

```

```c
// QuickParty::importQuickPartyScript @ 0x8a6e282

/* QuickParty::importQuickPartyScript(char const*, QuickParty::QuickPartyData*) */

char QuickParty::importQuickPartyScript(char *param_1,QuickPartyData *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined4 local_124;
  string asStack_120 [4];
  vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> avStack_11c [12];
  int local_110;
  int local_10c;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_108 [4];
  undefined4 local_104;
  int local_100;
  int local_fc;
  bool local_f5;
  string local_f4;
  string local_f0;
  _Rb_tree_iterator local_ec [4];
  undefined4 local_e8;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_e4 [4];
  map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>> local_e0 [4];
  pair local_dc [8];
  pair<char_const*const,int> local_d4 [8];
  int local_cc;
  pair local_c8 [8];
  pair<char_const*const,int> local_c0 [8];
  int local_b8;
  pair local_b4 [8];
  pair<char_const*const,int> local_ac [8];
  int local_a4;
  pair local_a0 [8];
  pair<char_const*const,int> local_98 [8];
  int local_90;
  pair local_8c [8];
  pair<char_const*const,int> local_84 [8];
  int local_7c;
  pair local_78 [8];
  pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward> local_70 [24];
  pair local_58 [8];
  pair<char_const*const,int> local_50 [8];
  int local_48;
  pair local_44 [8];
  pair<char_const*const,int> local_3c [8];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_f0);
                    /* try { // try from 08a6e2c9 to 08a6e2db has its CatchHandler @ 08a6eedd */
    std::string::clear((string *)&local_f0);
    std::string::string((string *)&local_f4);
                    /* try { // try from 08a6e2e5 to 08a6e31e has its CatchHandler @ 08a6eeb5 */
    std::string::clear((string *)&local_f4);
    local_f5 = false;
    local_fc = 0;
    LevelData::LevelData((LevelData *)&local_104);
LAB_08a6e309:
    puVar5 = (_Rb_tree_const_iterator *)0x1;
    cVar2 = ScanType((string *)&local_f0,true);
    cVar1 = local_f5;
    if (cVar2 == '\x01') {
LAB_08a6e32a:
      do {
        if ((importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup == '\0') &&
           (iVar4 = __cxa_guard_acquire(&importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)
                                         ::__lookup,puVar5), iVar4 != 0)) {
                    /* try { // try from 08a6e357 to 08a6e35b has its CatchHandler @ 08a6e387 */
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::map
                    ((map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                      *)importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup);
          __cxa_guard_release(&importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                               __lookup);
          puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
          __cxa_atexit(std::
                       map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                       ::~map,importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                              __lookup,&__dso_handle);
        }
        if ((importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__init_lock == '\0')
           && (iVar4 = __cxa_guard_acquire(&importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)
                                            ::__init_lock), iVar4 != 0)) {
                    /* try { // try from 08a6e3d1 to 08a6e3d5 has its CatchHandler @ 08a6e401 */
          SpinLock::SpinLock((SpinLock *)
                             &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                              __init_lock);
          __cxa_guard_release(&importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                               __init_lock);
          puVar5 = (undefined1 *)
                   &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__init_lock;
          __cxa_atexit(SpinLock::~SpinLock,
                       &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__init_lock
                       ,&__dso_handle);
        }
        if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\0') {
          SpinLock::enter((SpinLock *)
                          &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                           __init_lock);
          if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited != '\0') {
            SpinLock::leave((SpinLock *)
                            &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                             __init_lock);
            goto LAB_08a6e32a;
          }
          local_30 = 0;
        }
        else {
                    /* try { // try from 08a6e436 to 08a6ea7e has its CatchHandler @ 08a6eeb5 */
          local_e8 = std::string::c_str((string *)&local_f0);
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::find
                    ((char **)local_ec);
          std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                    (local_108,local_ec);
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::end
                    (local_e0);
          std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                    (local_e4,(_Rb_tree_iterator *)local_e0);
          puVar5 = local_e4;
          cVar1 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator!=
                            (local_108,(_Rb_tree_const_iterator *)puVar5);
          if (cVar1 == '\0') {
            local_30 = -1;
          }
          else {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator->
                              (local_108);
            local_30 = *(int *)(iVar4 + 4);
          }
        }
        if (local_30 == 0x4d) {
LAB_08a6e67f:
          if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01') {
            while (local_fc = ScanInt(&local_f5), local_f5 == true) {
              puVar5 = (undefined1 *)&local_fc;
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)param_2,(int *)puVar5);
            }
          }
          else {
            local_a4 = 0x4d;
            std::pair<char_const*const,int>::pair<char_const(&)[16],int>
                      (local_ac,"[level section]",&local_a4);
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_b4);
LAB_08a6e71b:
            if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01')
            {
              while( true ) {
                puVar5 = (_Rb_tree_const_iterator *)0x1;
                cVar1 = ScanType((string *)&local_f0,true);
                if (cVar1 == '\0') break;
                pcVar6 = "[/basic reward]";
                bVar3 = std::operator==(&local_f0,"[/basic reward]");
                puVar5 = pcVar6;
                if (bVar3) break;
                bVar3 = std::operator==(&local_f0,"[increase gold card]");
                if (bVar3) {
                  while (local_fc = ScanInt(&local_f5), local_f5 == true) {
                    local_100 = ScanInt((bool *)0x0);
                    local_fc = local_100;
                    local_f5 = (bool)ScanStr((string *)&local_f4);
                    if ((local_f5 == false) || (bVar3 = std::operator==(&local_f4,"%"), !bVar3)) {
                      local_104 = 0;
                    }
                    else {
                      local_104 = 1;
                    }
                    std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::
                    push_back((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *
                              )(param_2 + 0x18),(LevelData *)&local_104);
                  }
                }
                else {
                  pcVar6 = "[hell ratio]";
                  bVar3 = std::operator==(&local_f0,"[hell ratio]");
                  if (bVar3) {
                    local_f5 = (bool)ScanStr((string *)&local_f4);
                    puVar5 = pcVar6;
                    if (local_f5 != true) break;
                    local_fc = ScanInt((bool *)0x0);
                    *(int *)(param_2 + 0x30) = local_fc;
                    local_fc = ScanInt((bool *)0x0);
                    *(int *)(param_2 + 0x34) = local_fc;
                    LevelDataHell::LevelDataHell((LevelDataHell *)&local_110);
                    while (local_fc = ScanInt(&local_f5), local_f5 == true) {
                      local_110 = ScanInt((bool *)0x0);
                      local_fc = local_110;
                      local_10c = ScanInt((bool *)0x0);
                      local_fc = local_10c;
                      std::
                      vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>::
                      push_back((vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>
                                 *)(param_2 + 0x24),(LevelDataHell *)&local_110);
                    }
                  }
                }
              }
            }
            else {
              local_90 = 0x59;
              std::pair<char_const*const,int>::pair<char_const(&)[15],int>
                        (local_98,"[basic reward]",&local_90);
              std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
              insert(local_a0);
LAB_08a6e99a:
              if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited ==
                  '\x01') {
                while( true ) {
                  puVar5 = (_Rb_tree_const_iterator *)0x1;
                  cVar1 = ScanType((string *)&local_f0,true);
                  if (cVar1 != '\x01') break;
                  pcVar6 = "[/random reward]";
                  bVar3 = std::operator==(&local_f0,"[/random reward]");
                  puVar5 = pcVar6;
                  if (bVar3) break;
                  pcVar6 = "[reward]";
                  bVar3 = std::operator==(&local_f0,"[reward]");
                  if (bVar3) {
                    local_f5 = (bool)ScanStr((string *)&local_f4);
                    puVar5 = pcVar6;
                    if (local_f5 != true) break;
                    LevelDataRandomReward::LevelDataRandomReward
                              ((LevelDataRandomReward *)&local_124);
                    /* try { // try from 08a6ea88 to 08a6eb72 has its CatchHandler @ 08a6ebb4 */
                    local_124 = getRandomBuffTypeByName((string *)&local_f4);
                    ScanStr(asStack_120);
                    while (local_fc = ScanInt(&local_f5), local_f5 == true) {
                      local_100 = ScanInt((bool *)0x0);
                      local_fc = local_100;
                      local_f5 = (bool)ScanStr((string *)&local_f4);
                      if ((local_f5 == false) || (bVar3 = std::operator==(&local_f4,"%"), !bVar3)) {
                        local_104 = 0;
                      }
                      else {
                        local_104 = 1;
                      }
                      std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::
                      push_back(avStack_11c,(LevelData *)&local_104);
                    }
                    std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>::
                    pair<QuickParty::RandomBuffType&,QuickParty::LevelDataRandomReward&>
                              (local_70,(RandomBuffType *)&local_124,
                               (LevelDataRandomReward *)&local_124);
                    /* try { // try from 08a6eb8a to 08a6eb8e has its CatchHandler @ 08a6eb9f */
                    std::
                    map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
                    ::insert(local_78);
                    /* try { // try from 08a6eb98 to 08a6eb9c has its CatchHandler @ 08a6ebb4 */
                    std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>::
                    ~pair(local_70);
                    /* try { // try from 08a6ebd8 to 08a6ee98 has its CatchHandler @ 08a6eeb5 */
                    LevelDataRandomReward::~LevelDataRandomReward
                              ((LevelDataRandomReward *)&local_124);
                  }
                }
              }
              else {
                local_7c = 0x8f;
                std::pair<char_const*const,int>::pair<char_const(&)[16],int>
                          (local_84,"[random reward]",&local_7c);
                puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
                std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                ::insert(local_8c);
LAB_08a6ebe7:
                if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited !=
                    '\x01') {
                  local_48 = 0xb8;
                  std::pair<char_const*const,int>::pair<char_const(&)[21],int>
                            (local_50,"[random reward prob]",&local_48);
                  puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup
                  ;
                  std::
                  map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
                  insert(local_58);
                  goto LAB_08a6ecc7;
                }
                while (local_f5 = (bool)ScanStr((string *)&local_f4), local_f5 == true) {
                  local_2c = getRandomBuffTypeByName((string *)&local_f4);
                  if (local_2c < 0xb) {
                    for (local_28 = 0; local_28 < 7; local_28 = local_28 + 1) {
                      local_fc = ScanInt((bool *)0x0);
                      *(int *)(param_2 + (local_2c * 7 + local_28 + 0x14) * 4) = local_fc;
                    }
                  }
                }
              }
            }
          }
        }
        else if (local_30 < 0x4e) {
          if (local_30 == 0x3e) {
LAB_08a6e579:
            if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01')
            {
              cVar1 = '\x01';
              break;
            }
            local_cc = 0x3e;
            std::pair<char_const*const,int>::pair<char_const(&)[15],int>
                      (local_d4,"[/quick party]",&local_cc);
            puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_dc);
          }
          else if (local_30 != 0x41) {
            if (local_30 != 0) goto LAB_08a6ee7f;
            goto LAB_08a6e579;
          }
          if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited != '\x01') {
            local_b8 = 0x41;
            std::pair<char_const*const,int>::pair<char_const(&)[23],int>
                      (local_c0,"[unable to quickparty]",&local_b8);
            puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_c8);
            goto LAB_08a6e67f;
          }
          while (local_fc = ScanInt(&local_f5), local_f5 == true) {
            puVar5 = (undefined1 *)&local_fc;
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)(param_2 + 0xc),(int *)puVar5);
          }
        }
        else {
          if (local_30 == 0x8f) goto LAB_08a6e99a;
          if (local_30 < 0x90) {
            if (local_30 != 0x59) goto LAB_08a6ee7f;
            goto LAB_08a6e71b;
          }
          if (local_30 == 0xb8) goto LAB_08a6ebe7;
          if (local_30 != 0xce) goto LAB_08a6ee7f;
LAB_08a6ecc7:
          if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01') {
            while (cVar1 = ScanStr((string *)&local_f4), cVar1 != '\0') {
              local_24 = -1;
              pcVar6 = "[normal]";
              bVar3 = std::operator==(&local_f4,"[normal]");
              if (bVar3) {
                local_24 = 0;
                puVar5 = pcVar6;
              }
              else {
                pcVar6 = "[ancient]";
                bVar3 = std::operator==(&local_f4,"[ancient]");
                puVar5 = pcVar6;
                if (!bVar3) break;
                local_24 = 1;
              }
              cVar1 = ScanStr((string *)&local_f4);
              if (cVar1 != '\x01') break;
              local_20 = -1;
              pcVar6 = "[easy]";
              bVar3 = std::operator==(&local_f4,"[easy]");
              if (bVar3) {
                local_20 = 0;
                puVar5 = pcVar6;
              }
              else {
                pcVar6 = "[medium]";
                bVar3 = std::operator==(&local_f4,"[medium]");
                if (bVar3) {
                  local_20 = 1;
                  puVar5 = pcVar6;
                }
                else {
                  pcVar6 = "[hard]";
                  bVar3 = std::operator==(&local_f4,"[hard]");
                  if (bVar3) {
                    local_20 = 2;
                    puVar5 = pcVar6;
                  }
                  else {
                    pcVar6 = "[ultimate]";
                    bVar3 = std::operator==(&local_f4,"[ultimate]");
                    puVar5 = pcVar6;
                    if (!bVar3) break;
                    local_20 = 3;
                  }
                }
              }
              cVar1 = ScanInt(&local_fc);
              if (cVar1 != '\x01') break;
              if ((((-1 < local_24) && (local_24 < 2)) && (-1 < local_20)) && (local_20 < 5)) {
                *(int *)(param_2 + (local_24 * 4 + local_20 + 0x68) * 4) = local_fc;
              }
            }
          }
          else {
            local_34 = 0xce;
            std::pair<char_const*const,int>::pair<char_const(&)[20],int>
                      (local_3c,"[require party num]",&local_34);
            puVar5 = importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_44);
          }
        }
LAB_08a6ee7f:
        if (importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited == '\x01')
        goto LAB_08a6e309;
        SpinLock::leave((SpinLock *)
                        &importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::
                         __init_lock);
        importQuickPartyScript(char_const*,QuickParty::QuickPartyData*)::__inited = '\x01';
      } while( true );
    }
                    /* try { // try from 08a6eed6 to 08a6eeda has its CatchHandler @ 08a6eedd */
    std::string::~string((string *)&local_f4);
    std::string::~string((string *)&local_f0);
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}

```

