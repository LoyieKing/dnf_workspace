# Inter_Send_Charac_no_from_monitor

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e312a Inter_Send_Charac_no_from_monitor::dispatch_sig  [0x084e312a-0x84e3231] ===
 84e312a:	55                   	push   %ebp
 84e312b:	89 e5                	mov    %esp,%ebp
 84e312d:	56                   	push   %esi
 84e312e:	53                   	push   %ebx
 84e312f:	83 ec 20             	sub    $0x20,%esp
 84e3132:	8b 45 10             	mov    0x10(%ebp),%eax
 84e3135:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3138:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e313b:	89 04 24             	mov    %eax,(%esp)
 84e313e:	e8 09 ac 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e3143:	c7 44 24 08 4b 01 00 	movl   $0x14b,0x8(%esp)
 84e314a:	00 
 84e314b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3152:	00 
 84e3153:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3156:	89 04 24             	mov    %eax,(%esp)
 84e3159:	e8 9e 87 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e315e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3161:	8b 40 12             	mov    0x12(%eax),%eax
 84e3164:	85 c0                	test   %eax,%eax
 84e3166:	75 15                	jne    84e317d <_ZN33Inter_Send_Charac_no_from_monitor12dispatch_sigEP5CUserPci+0x53>
 84e3168:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e316f:	00 
 84e3170:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3173:	89 04 24             	mov    %eax,(%esp)
 84e3176:	e8 a5 87 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e317b:	eb 5c                	jmp    84e31d9 <_ZN33Inter_Send_Charac_no_from_monitor12dispatch_sigEP5CUserPci+0xaf>
 84e317d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3184:	00 
 84e3185:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3188:	89 04 24             	mov    %eax,(%esp)
 84e318b:	e8 90 87 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3190:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3193:	8b 40 0e             	mov    0xe(%eax),%eax
 84e3196:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e319a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e319d:	89 04 24             	mov    %eax,(%esp)
 84e31a0:	e8 97 87 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e31a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e31a8:	8b 40 12             	mov    0x12(%eax),%eax
 84e31ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e31af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e31b2:	89 04 24             	mov    %eax,(%esp)
 84e31b5:	e8 82 87 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e31ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e31bd:	8b 40 12             	mov    0x12(%eax),%eax
 84e31c0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e31c3:	83 c2 16             	add    $0x16,%edx
 84e31c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e31ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e31ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e31d1:	89 04 24             	mov    %eax,(%esp)
 84e31d4:	e8 0b 42 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e31d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e31e0:	00 
 84e31e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e31e4:	89 04 24             	mov    %eax,(%esp)
 84e31e7:	e8 6c 87 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e31ec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e31ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e31f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e31f6:	89 04 24             	mov    %eax,(%esp)
 84e31f9:	e8 bc 53 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e31fe:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e3203:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3206:	89 04 24             	mov    %eax,(%esp)
 84e3209:	e8 72 ac 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e320e:	89 d8                	mov    %ebx,%eax
 84e3210:	83 c4 20             	add    $0x20,%esp
 84e3213:	5b                   	pop    %ebx
 84e3214:	5e                   	pop    %esi
 84e3215:	5d                   	pop    %ebp
 84e3216:	c3                   	ret
 84e3217:	89 d3                	mov    %edx,%ebx
 84e3219:	89 c6                	mov    %eax,%esi
 84e321b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e321e:	89 04 24             	mov    %eax,(%esp)
 84e3221:	e8 5a ac 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3226:	89 f0                	mov    %esi,%eax
 84e3228:	89 da                	mov    %ebx,%edx
 84e322a:	89 04 24             	mov    %eax,(%esp)
 84e322d:	e8 1e 05 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_Send_Charac_no_from_monitor::dispatch_sig @ 0x84e312a

/* Inter_Send_Charac_no_from_monitor::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Send_Charac_no_from_monitor::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e3159 to 084e31fd has its CatchHandler @ 084e3217 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14b);
  if (*(int *)(local_10 + 0x12) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xe));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0x16),*(int *)(local_10 + 0x12));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

