# dispatch_sig

`_ZN26Inter_DB_RequestBlackCount12dispatch_sigEP5CUserPci`

`Inter_DB_RequestBlackCount::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_DB_RequestBlackCount` | `0x084d1218` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d1218  _ZN26Inter_DB_RequestBlackCount12dispatch_sigEP5CUserPci
#           Inter_DB_RequestBlackCount::dispatch_sig(CUser*, char*, int)
# range [0x084d1218, 0x084d1343]
084d1218 +0x000:  push   %ebp
084d1219 +0x001:  mov    %esp,%ebp
084d121b +0x003:  push   %esi
084d121c +0x004:  push   %ebx
084d121d +0x005:  sub    $0x20,%esp
084d1220 +0x008:  mov    0xc(%ebp),%eax
084d1223 +0x00b:  mov    %eax,(%esp)
084d1226 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d122b +0x013:  test   %eax,%eax
084d122d +0x015:  sete   %al
084d1230 +0x018:  test   %al,%al
084d1232 +0x01a:  je     084d123e <+0x26>
084d1234 +0x01c:  mov    $0x0,%eax
084d1239 +0x021:  jmp    084d133d <+0x125>
084d123e +0x026:  mov    0x10(%ebp),%eax
084d1241 +0x029:  mov    %eax,-0xc(%ebp)
084d1244 +0x02c:  mov    -0xc(%ebp),%eax
084d1247 +0x02f:  mov    0x4(%eax),%eax
084d124a +0x032:  test   %eax,%eax
084d124c +0x034:  jne    084d1267 <+0x4f>
084d124e +0x036:  mov    -0xc(%ebp),%eax
084d1251 +0x039:  mov    0x8(%eax),%eax
084d1254 +0x03c:  mov    %eax,%edx
084d1256 +0x03e:  mov    0xc(%ebp),%eax
084d1259 +0x041:  mov    %edx,0x4(%esp)
084d125d +0x045:  mov    %eax,(%esp)
084d1260 +0x048:  call   0822f6b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d5e
084d1265 +0x04d:  jmp    084d127a <+0x62>
084d1267 +0x04f:  mov    0xc(%ebp),%eax
084d126a +0x052:  movl   $0x0,0x4(%esp)
084d1272 +0x05a:  mov    %eax,(%esp)
084d1275 +0x05d:  call   0822f6b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d5e
084d127a +0x062:  movl   $0x7,0x4(%esp)
084d1282 +0x06a:  mov    0xc(%ebp),%eax
084d1285 +0x06d:  mov    %eax,(%esp)
084d1288 +0x070:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
084d128d +0x075:  mov    -0xc(%ebp),%eax
084d1290 +0x078:  mov    0xc(%eax),%eax
084d1293 +0x07b:  test   %eax,%eax
084d1295 +0x07d:  je     084d1338 <+0x120>
084d129b +0x083:  lea    -0x18(%ebp),%eax
084d129e +0x086:  mov    %eax,(%esp)
084d12a1 +0x089:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d12a6 +0x08e:  movl   $0xec,0x8(%esp)
084d12ae +0x096:  movl   $0x0,0x4(%esp)
084d12b6 +0x09e:  lea    -0x18(%ebp),%eax
084d12b9 +0x0a1:  mov    %eax,(%esp)
084d12bc +0x0a4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d12c1 +0x0a9:  mov    -0xc(%ebp),%eax
084d12c4 +0x0ac:  mov    0xc(%eax),%eax
084d12c7 +0x0af:  mov    %eax,0x4(%esp)
084d12cb +0x0b3:  lea    -0x18(%ebp),%eax
084d12ce +0x0b6:  mov    %eax,(%esp)
084d12d1 +0x0b9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d12d6 +0x0be:  mov    -0xc(%ebp),%eax
084d12d9 +0x0c1:  mov    0x8(%eax),%eax
084d12dc +0x0c4:  mov    %eax,0x4(%esp)
084d12e0 +0x0c8:  lea    -0x18(%ebp),%eax
084d12e3 +0x0cb:  mov    %eax,(%esp)
084d12e6 +0x0ce:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d12eb +0x0d3:  movl   $0x1,0x4(%esp)
084d12f3 +0x0db:  lea    -0x18(%ebp),%eax
084d12f6 +0x0de:  mov    %eax,(%esp)
084d12f9 +0x0e1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d12fe +0x0e6:  lea    -0x18(%ebp),%eax
084d1301 +0x0e9:  mov    %eax,0x4(%esp)
084d1305 +0x0ed:  mov    0xc(%ebp),%eax
084d1308 +0x0f0:  mov    %eax,(%esp)
084d130b +0x0f3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d1310 +0x0f8:  jmp    084d132d <+0x115>
084d1312 +0x0fa:  mov    %edx,%ebx
084d1314 +0x0fc:  mov    %eax,%esi
084d1316 +0x0fe:  lea    -0x18(%ebp),%eax
084d1319 +0x101:  mov    %eax,(%esp)
084d131c +0x104:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d1321 +0x109:  mov    %esi,%eax
084d1323 +0x10b:  mov    %ebx,%edx
084d1325 +0x10d:  mov    %eax,(%esp)
084d1328 +0x110:  call   08ae3750 <_Unwind_Resume>
084d132d +0x115:  lea    -0x18(%ebp),%eax
084d1330 +0x118:  mov    %eax,(%esp)
084d1333 +0x11b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d1338 +0x120:  mov    $0x0,%eax
084d133d +0x125:  add    $0x20,%esp
084d1340 +0x128:  pop    %ebx
084d1341 +0x129:  pop    %esi
084d1342 +0x12a:  pop    %ebp
084d1343 +0x12b:  ret
```

## 反编译 C

```c
// Inter_DB_RequestBlackCount::dispatch_sig @ 0x84d1218

/* Inter_DB_RequestBlackCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DB_RequestBlackCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_10 = param_3;
    if (*(int *)(param_3 + 4) == 0) {
      CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_2,*(uint *)(param_3 + 8));
    }
    else {
      CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_2,0);
    }
    CUser::EnableCharacInfo((CUser *)param_2,7);
    if (*(int *)(local_10 + 0xc) != 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d12bc to 084d130f has its CatchHandler @ 084d1312 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xec);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```
