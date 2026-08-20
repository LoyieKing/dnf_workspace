# setTagCharacInven

`_ZN5CUser17setTagCharacInvenEP21TAG_CHARAC_INVEN_DATA`

`CUser::setTagCharacInven(TAG_CHARAC_INVEN_DATA*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690226` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690226  _ZN5CUser17setTagCharacInvenEP21TAG_CHARAC_INVEN_DATA
#           CUser::setTagCharacInven(TAG_CHARAC_INVEN_DATA*)
# range [0x08690226, 0x086903f7]
08690226 +0x000:  push   %ebp
08690227 +0x001:  mov    %esp,%ebp
08690229 +0x003:  push   %ebx
0869022a +0x004:  sub    $0x34,%esp
0869022d +0x007:  mov    0x8(%ebp),%eax
08690230 +0x00a:  mov    %eax,(%esp)
08690233 +0x00d:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
08690238 +0x012:  test   %eax,%eax
0869023a +0x014:  sete   %al
0869023d +0x017:  test   %al,%al
0869023f +0x019:  je     08690281 <+0x5b>
08690241 +0x01b:  movl   $0x5,0xc(%esp)
08690249 +0x023:  movl   $0xb166,0x8(%esp)
08690251 +0x02b:  movl   $&_ZZN5CUser17setTagCharacInvenEP21TAG_CHARAC_INVEN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08690259 +0x033:  lea    -0x24(%ebp),%eax
0869025c +0x036:  mov    %eax,(%esp)
0869025f +0x039:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08690264 +0x03e:  movl   $"CUser::setTagCharacInven m_tag_selected is null",0x4(%esp)
0869026c +0x046:  lea    -0x24(%ebp),%eax
0869026f +0x049:  mov    %eax,(%esp)
08690272 +0x04c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08690277 +0x051:  mov    $0x0,%eax
0869027c +0x056:  jmp    086903f1 <+0x1cb>
08690281 +0x05b:  mov    0xc(%ebp),%ebx
08690284 +0x05e:  mov    0x8(%ebp),%eax
08690287 +0x061:  mov    %eax,(%esp)
0869028a +0x064:  call   0869606a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28bf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28bf
0869028f +0x069:  add    $0x1c,%eax
08690292 +0x06c:  movl   $0x53e,0x8(%esp)
0869029a +0x074:  mov    %ebx,0x4(%esp)
0869029e +0x078:  mov    %eax,(%esp)
086902a1 +0x07b:  call   0807d8a0 <_init+0x198>
086902a6 +0x080:  mov    0xc(%ebp),%eax
086902a9 +0x083:  lea    0x3ff8(%eax),%ebx
086902af +0x089:  mov    0x8(%ebp),%eax
086902b2 +0x08c:  mov    %eax,(%esp)
086902b5 +0x08f:  call   0869606a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28bf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28bf
086902ba +0x094:  mov    %ebx,0x4(%esp)
086902be +0x098:  mov    %eax,(%esp)
086902c1 +0x09b:  call   084e99b4 <_GLOBAL__I__Z7getUserj+0x966>  ; global constructors keyed to getUser(unsigned int)+0x966
086902c6 +0x0a0:  movl   $0x0,-0x14(%ebp)
086902cd +0x0a7:  jmp    0869038b <+0x165>
086902d2 +0x0ac:  movl   $0x0,-0x10(%ebp)
086902d9 +0x0b3:  mov    -0x14(%ebp),%eax
086902dc +0x0b6:  mov    0xc(%ebp),%edx
086902df +0x0b9:  imul   $0x4b,%eax,%eax
086902e2 +0x0bc:  lea    (%edx,%eax,1),%eax
086902e5 +0x0bf:  add    $0x1e60,%eax
086902ea +0x0c4:  mov    0xc(%eax),%eax
086902ed +0x0c7:  test   %eax,%eax
086902ef +0x0c9:  je     08690387 <+0x161>
086902f5 +0x0cf:  mov    -0x14(%ebp),%eax
086902f8 +0x0d2:  mov    0xc(%ebp),%edx
086902fb +0x0d5:  imul   $0x4b,%eax,%eax
086902fe +0x0d8:  lea    (%edx,%eax,1),%eax
08690301 +0x0db:  add    $0x1e60,%eax
08690306 +0x0e0:  mov    0xc(%eax),%eax
08690309 +0x0e3:  mov    0xc(%ebp),%edx
0869030c +0x0e6:  add    $0x53e,%edx
08690312 +0x0ec:  mov    %eax,0x8(%esp)
08690316 +0x0f0:  movl   $0x69,0x4(%esp)
0869031e +0x0f8:  mov    %edx,(%esp)
08690321 +0x0fb:  call   084e91a4 <_GLOBAL__I__Z7getUserj+0x156>  ; global constructors keyed to getUser(unsigned int)+0x156
08690326 +0x100:  mov    %eax,-0x10(%ebp)
08690329 +0x103:  movl   $0x0,-0xc(%ebp)
08690330 +0x10a:  jmp    0869037c <+0x156>
08690332 +0x10c:  mov    -0xc(%ebp),%edx
08690335 +0x10f:  mov    0xc(%ebp),%eax
08690338 +0x112:  imul   $0x3d,%edx,%edx
0869033b +0x115:  mov    0x7(%edx,%eax,1),%edx
0869033f +0x119:  mov    -0x14(%ebp),%eax
08690342 +0x11c:  mov    0xc(%ebp),%ecx
08690345 +0x11f:  imul   $0x4b,%eax,%eax
08690348 +0x122:  lea    (%ecx,%eax,1),%eax
0869034b +0x125:  add    $0x1e40,%eax
08690350 +0x12a:  mov    0x7(%eax),%eax
08690353 +0x12d:  cmp    %eax,%edx
08690355 +0x12f:  jne    08690378 <+0x152>
08690357 +0x131:  mov    0x8(%ebp),%eax
0869035a +0x134:  mov    %eax,(%esp)
0869035d +0x137:  call   0869606a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28bf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28bf
08690362 +0x13c:  mov    -0x10(%ebp),%edx
08690365 +0x13f:  mov    %edx,0x8(%esp)
08690369 +0x143:  mov    -0xc(%ebp),%edx
0869036c +0x146:  mov    %edx,0x4(%esp)
08690370 +0x14a:  mov    %eax,(%esp)
08690373 +0x14d:  call   084e9990 <_GLOBAL__I__Z7getUserj+0x942>  ; global constructors keyed to getUser(unsigned int)+0x942
08690378 +0x152:  addl   $0x1,-0xc(%ebp)
0869037c +0x156:  cmpl   $0x9,-0xc(%ebp)
08690380 +0x15a:  setle  %al
08690383 +0x15d:  test   %al,%al
08690385 +0x15f:  jne    08690332 <+0x10c>
08690387 +0x161:  addl   $0x1,-0x14(%ebp)
0869038b +0x165:  mov    0xc(%ebp),%eax
0869038e +0x168:  mov    0x1e43(%eax),%eax
08690394 +0x16e:  cmp    -0x14(%ebp),%eax
08690397 +0x171:  setg   %al
0869039a +0x174:  test   %al,%al
0869039c +0x176:  jne    086902d2 <+0xac>
086903a2 +0x17c:  mov    0xc(%ebp),%eax
086903a5 +0x17f:  mov    0x4020(%eax),%eax
086903ab +0x185:  test   %eax,%eax
086903ad +0x187:  jne    086903cc <+0x1a6>
086903af +0x189:  mov    0x8(%ebp),%eax
086903b2 +0x18c:  mov    %eax,(%esp)
086903b5 +0x18f:  call   0869608a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28df>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28df
086903ba +0x194:  movl   $0x8,0x4(%esp)
086903c2 +0x19c:  mov    %eax,(%esp)
086903c5 +0x19f:  call   08694a0c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1261>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1261
086903ca +0x1a4:  jmp    086903ec <+0x1c6>
086903cc +0x1a6:  mov    0xc(%ebp),%eax
086903cf +0x1a9:  mov    0x4020(%eax),%ebx
086903d5 +0x1af:  mov    0x8(%ebp),%eax
086903d8 +0x1b2:  mov    %eax,(%esp)
086903db +0x1b5:  call   0869608a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28df>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28df
086903e0 +0x1ba:  mov    %ebx,0x4(%esp)
086903e4 +0x1be:  mov    %eax,(%esp)
086903e7 +0x1c1:  call   08694a0c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1261>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1261
086903ec +0x1c6:  mov    $0x1,%eax
086903f1 +0x1cb:  add    $0x34,%esp
086903f4 +0x1ce:  pop    %ebx
086903f5 +0x1cf:  pop    %ebp
086903f6 +0x1d0:  ret
086903f7 +0x1d1:  nop
```

## 反编译 C

```c
// CUser::setTagCharacInven @ 0x8690226

/* CUser::setTagCharacInven(TAG_CHARAC_INVEN_DATA*) */

undefined4 __thiscall CUser::setTagCharacInven(CUser *this,TAG_CHARAC_INVEN_DATA *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CInventory *pCVar3;
  CCargo *pCVar4;
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  
  iVar1 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
  if (iVar1 == 0) {
    cMyTrace::cMyTrace(local_28,"bool CUser::setTagCharacInven(TAG_CHARAC_INVEN_DATA*)",0xb166,5);
    cMyTrace::operator()(local_28,"CUser::setTagCharacInven m_tag_selected is null");
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getTagCharacInvenW((CUserCharacInfo *)this);
    memcpy((void *)(iVar1 + 0x1c),param_1,0x53e);
    pCVar3 = (CInventory *)CUserCharacInfo::getTagCharacInvenW((CUserCharacInfo *)this);
    CInventory::SetClearAvatar(pCVar3,(ulong *)(param_1 + 0x3ff8));
    for (local_18 = 0; local_18 < *(int *)(param_1 + 0x1e43); local_18 = local_18 + 1) {
      local_14 = 0;
      if (*(int *)(param_1 + local_18 * 0x4b + 0x1e6c) != 0) {
        local_14 = GetItemIdByAddInfo((Inven_Item *)(param_1 + 0x53e),0x69,
                                      *(int *)(param_1 + local_18 * 0x4b + 0x1e6c));
        for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
          if (*(int *)(param_1 + local_10 * 0x3d + 7) ==
              *(int *)(param_1 + local_18 * 0x4b + 0x1e47)) {
            pCVar3 = (CInventory *)CUserCharacInfo::getTagCharacInvenW((CUserCharacInfo *)this);
            CInventory::SetClearAvatar(pCVar3,local_10,local_14);
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x4020) == 0) {
      pCVar4 = (CCargo *)CUserCharacInfo::getTagCharacCargoW((CUserCharacInfo *)this);
      CCargo::SetCapacity(pCVar4,8);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4020);
      pCVar4 = (CCargo *)CUserCharacInfo::getTagCharacCargoW((CUserCharacInfo *)this);
      CCargo::SetCapacity(pCVar4,iVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
