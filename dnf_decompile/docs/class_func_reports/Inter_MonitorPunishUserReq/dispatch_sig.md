# dispatch_sig

`_ZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPci`

`Inter_MonitorPunishUserReq::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorPunishUserReq` | `0x084db294` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084db294  _ZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPci
#           Inter_MonitorPunishUserReq::dispatch_sig(CUser*, char*, int)
# range [0x084db294, 0x084db40d]
084db294 +0x000:  push   %ebp
084db295 +0x001:  mov    %esp,%ebp
084db297 +0x003:  push   %esi
084db298 +0x004:  push   %ebx
084db299 +0x005:  sub    $0x40,%esp
084db29c +0x008:  mov    0x10(%ebp),%eax
084db29f +0x00b:  mov    %eax,-0x14(%ebp)
084db2a2 +0x00e:  mov    -0x14(%ebp),%eax
084db2a5 +0x011:  movzwl 0xb(%eax),%eax
084db2a9 +0x015:  movzwl %ax,%esi
084db2ac +0x018:  mov    -0x14(%ebp),%eax
084db2af +0x01b:  movzbl 0xa(%eax),%eax
084db2b3 +0x01f:  movsbl %al,%ebx
084db2b6 +0x022:  movl   $0x0,0xc(%esp)
084db2be +0x02a:  movl   $0x43bc,0x8(%esp)
084db2c6 +0x032:  movl   $&_ZZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084db2ce +0x03a:  lea    -0x34(%ebp),%eax
084db2d1 +0x03d:  mov    %eax,(%esp)
084db2d4 +0x040:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084db2d9 +0x045:  mov    %esi,0xc(%esp)
084db2dd +0x049:  mov    %ebx,0x8(%esp)
084db2e1 +0x04d:  movl   $"Monitor Punish User / m_flag = %d / user_count",0x4(%esp)
084db2e9 +0x055:  lea    -0x34(%ebp),%eax
084db2ec +0x058:  mov    %eax,(%esp)
084db2ef +0x05b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084db2f4 +0x060:  mov    -0x14(%ebp),%eax
084db2f7 +0x063:  movzbl 0xa(%eax),%eax
084db2fb +0x067:  test   %al,%al
084db2fd +0x069:  jne    084db402 <+0x16e>
084db303 +0x06f:  movl   $0x0,-0x10(%ebp)
084db30a +0x076:  movl   $0x0,-0x10(%ebp)
084db311 +0x07d:  jmp    084db3ea <+0x156>
084db316 +0x082:  mov    -0x10(%ebp),%edx
084db319 +0x085:  mov    -0x14(%ebp),%eax
084db31c +0x088:  mov    0xd(%eax,%edx,4),%eax
084db320 +0x08c:  cmp    $0x63,%eax
084db323 +0x08f:  jbe    084db3e5 <+0x151>
084db329 +0x095:  mov    -0x10(%ebp),%edx
084db32c +0x098:  mov    -0x14(%ebp),%eax
084db32f +0x09b:  mov    0xd(%eax,%edx,4),%ebx
084db333 +0x09f:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084db338 +0x0a4:  mov    %ebx,0x4(%esp)
084db33c +0x0a8:  mov    %eax,(%esp)
084db33f +0x0ab:  call   08294ad0 <_ZN12CGameManager20isConnectUserByAccIdEj>  ; CGameManager::isConnectUserByAccId(unsigned int)
084db344 +0x0b0:  test   %al,%al
084db346 +0x0b2:  je     084db3e6 <+0x152>
084db34c +0x0b8:  mov    -0x10(%ebp),%edx
084db34f +0x0bb:  mov    -0x14(%ebp),%eax
084db352 +0x0be:  mov    0xd(%eax,%edx,4),%ebx
084db356 +0x0c2:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084db35b +0x0c7:  mov    %ebx,0x4(%esp)
084db35f +0x0cb:  mov    %eax,(%esp)
084db362 +0x0ce:  call   082948c6 <_ZN12CGameManager14GetUserByAccIdEj>  ; CGameManager::GetUserByAccId(unsigned int)
084db367 +0x0d3:  mov    %eax,-0xc(%ebp)
084db36a +0x0d6:  movl   $0x0,0xc(%esp)
084db372 +0x0de:  movl   $0x1,0x8(%esp)
084db37a +0x0e6:  movl   $0x2c,0x4(%esp)
084db382 +0x0ee:  mov    -0xc(%ebp),%eax
084db385 +0x0f1:  mov    %eax,(%esp)
084db388 +0x0f4:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084db38d +0x0f9:  mov    -0x10(%ebp),%edx
084db390 +0x0fc:  mov    -0x14(%ebp),%eax
084db393 +0x0ff:  mov    0xd(%eax,%edx,4),%eax
084db397 +0x103:  movl   $0x0,0x4(%esp)
084db39f +0x10b:  mov    %eax,(%esp)
084db3a2 +0x10e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084db3a7 +0x113:  mov    %eax,%ebx
084db3a9 +0x115:  movl   $0x0,0xc(%esp)
084db3b1 +0x11d:  movl   $0x43d4,0x8(%esp)
084db3b9 +0x125:  movl   $&_ZZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084db3c1 +0x12d:  lea    -0x24(%ebp),%eax
084db3c4 +0x130:  mov    %eax,(%esp)
084db3c7 +0x133:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084db3cc +0x138:  mov    %ebx,0x8(%esp)
084db3d0 +0x13c:  movl   $"System Kick User : %s",0x4(%esp)
084db3d8 +0x144:  lea    -0x24(%ebp),%eax
084db3db +0x147:  mov    %eax,(%esp)
084db3de +0x14a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084db3e3 +0x14f:  jmp    084db3e6 <+0x152>
084db3e5 +0x151:  nop
084db3e6 +0x152:  addl   $0x1,-0x10(%ebp)
084db3ea +0x156:  mov    -0x14(%ebp),%eax
084db3ed +0x159:  movzwl 0xb(%eax),%eax
084db3f1 +0x15d:  movzwl %ax,%eax
084db3f4 +0x160:  cmp    -0x10(%ebp),%eax
084db3f7 +0x163:  setg   %al
084db3fa +0x166:  test   %al,%al
084db3fc +0x168:  jne    084db316 <+0x82>
084db402 +0x16e:  mov    $0x0,%eax
084db407 +0x173:  add    $0x40,%esp
084db40a +0x176:  pop    %ebx
084db40b +0x177:  pop    %esi
084db40c +0x178:  pop    %ebp
084db40d +0x179:  ret
```

## 反编译 C

```c
// Inter_MonitorPunishUserReq::dispatch_sig @ 0x84db294

/* Inter_MonitorPunishUserReq::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorPunishUserReq::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  CGameManager *pCVar4;
  undefined4 uVar5;
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  CUser *local_10;
  
  local_18 = param_3;
  uVar1 = *(ushort *)(param_3 + 0xb);
  cVar3 = *(char *)(param_3 + 10);
  cMyTrace::cMyTrace(local_38,
                     "virtual int Inter_MonitorPunishUserReq::dispatch_sig(CUser*, char*, int)",
                     0x43bc,0);
  cMyTrace::operator()
            (local_38,"Monitor Punish User / m_flag = %d / user_count",(int)cVar3,(uint)uVar1);
  if (*(char *)(local_18 + 10) == '\0') {
    for (local_14 = 0; local_14 < (int)(uint)*(ushort *)(local_18 + 0xb); local_14 = local_14 + 1) {
      if (99 < *(uint *)(local_18 + 0xd + local_14 * 4)) {
        uVar2 = *(uint *)(local_18 + 0xd + local_14 * 4);
        pCVar4 = (CGameManager *)G_CGameManager();
        cVar3 = CGameManager::isConnectUserByAccId(pCVar4,uVar2);
        if (cVar3 != '\0') {
          uVar2 = *(uint *)(local_18 + 0xd + local_14 * 4);
          pCVar4 = (CGameManager *)G_CGameManager();
          local_10 = (CUser *)CGameManager::GetUserByAccId(pCVar4,uVar2);
          CUser::DisConnSig(local_10,0x2c,1,0);
          uVar5 = NumberToString(*(uint *)(local_18 + 0xd + local_14 * 4),0);
          cMyTrace::cMyTrace(local_28,
                             "virtual int Inter_MonitorPunishUserReq::dispatch_sig(CUser*, char*, int)"
                             ,0x43d4,0);
          cMyTrace::operator()(local_28,"System Kick User : %s",uVar5);
        }
      }
    }
  }
  return 0;
}
```
