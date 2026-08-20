# printBlackList

`_ZN5CUser14printBlackListEv`

`CUser::printBlackList()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867ee28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867ee28  _ZN5CUser14printBlackListEv
#           CUser::printBlackList()
# range [0x0867ee28, 0x0867efad]
0867ee28 +0x000:  push   %ebp
0867ee29 +0x001:  mov    %esp,%ebp
0867ee2b +0x003:  push   %edi
0867ee2c +0x004:  push   %ebx
0867ee2d +0x005:  sub    $0x530,%esp
0867ee33 +0x00b:  mov    0x8(%ebp),%eax
0867ee36 +0x00e:  add    $0x8cef4,%eax
0867ee3b +0x013:  mov    %eax,(%esp)
0867ee3e +0x016:  call   080e286c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x612>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x612
0867ee43 +0x01b:  test   %al,%al
0867ee45 +0x01d:  jne    0867efa3 <+0x17b>
0867ee4b +0x023:  lea    -0x518(%ebp),%ebx
0867ee51 +0x029:  mov    $0x0,%eax
0867ee56 +0x02e:  mov    $0x100,%edx
0867ee5b +0x033:  mov    %ebx,%edi
0867ee5d +0x035:  mov    %edx,%ecx
0867ee5f +0x037:  rep stos %eax,%es:(%edi)
0867ee61 +0x039:  lea    -0x18(%ebp),%eax
0867ee64 +0x03c:  mov    %eax,(%esp)
0867ee67 +0x03f:  call   0869bfee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8843>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8843
0867ee6c +0x044:  mov    0x8(%ebp),%eax
0867ee6f +0x047:  lea    0x8cef4(%eax),%edx
0867ee75 +0x04d:  lea    -0x51c(%ebp),%eax
0867ee7b +0x053:  mov    %edx,0x4(%esp)
0867ee7f +0x057:  mov    %eax,(%esp)
0867ee82 +0x05a:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
0867ee87 +0x05f:  sub    $0x4,%esp
0867ee8a +0x062:  mov    -0x51c(%ebp),%eax
0867ee90 +0x068:  mov    %eax,-0x18(%ebp)
0867ee93 +0x06b:  jmp    0867eed1 <+0xa9>
0867ee95 +0x06d:  lea    -0x18(%ebp),%eax
0867ee98 +0x070:  mov    %eax,(%esp)
0867ee9b +0x073:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
0867eea0 +0x078:  mov    (%eax),%eax
0867eea2 +0x07a:  mov    %eax,0xc(%esp)
0867eea6 +0x07e:  lea    -0x518(%ebp),%eax
0867eeac +0x084:  mov    %eax,0x8(%esp)
0867eeb0 +0x088:  movl   $"%s,%d",0x4(%esp)
0867eeb8 +0x090:  lea    -0x518(%ebp),%eax
0867eebe +0x096:  mov    %eax,(%esp)
0867eec1 +0x099:  call   0807e440 <_init+0xd38>
0867eec6 +0x09e:  lea    -0x18(%ebp),%eax
0867eec9 +0x0a1:  mov    %eax,(%esp)
0867eecc +0x0a4:  call   0811131c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82e
0867eed1 +0x0a9:  mov    0x8(%ebp),%eax
0867eed4 +0x0ac:  lea    0x8cef4(%eax),%edx
0867eeda +0x0b2:  lea    -0x14(%ebp),%eax
0867eedd +0x0b5:  mov    %edx,0x4(%esp)
0867eee1 +0x0b9:  mov    %eax,(%esp)
0867eee4 +0x0bc:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
0867eee9 +0x0c1:  sub    $0x4,%esp
0867eeec +0x0c4:  lea    -0x14(%ebp),%eax
0867eeef +0x0c7:  mov    %eax,0x4(%esp)
0867eef3 +0x0cb:  lea    -0x18(%ebp),%eax
0867eef6 +0x0ce:  mov    %eax,(%esp)
0867eef9 +0x0d1:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
0867eefe +0x0d6:  test   %al,%al
0867ef00 +0x0d8:  jne    0867ee95 <+0x6d>
0867ef02 +0x0da:  lea    -0x518(%ebp),%eax
0867ef08 +0x0e0:  mov    %eax,0x8(%esp)
0867ef0c +0x0e4:  movl   $"%s\n",0x4(%esp)
0867ef14 +0x0ec:  lea    -0x518(%ebp),%eax
0867ef1a +0x0f2:  mov    %eax,(%esp)
0867ef1d +0x0f5:  call   0807e440 <_init+0xd38>
0867ef22 +0x0fa:  lea    -0x118(%ebp),%ebx
0867ef28 +0x100:  mov    $0x0,%eax
0867ef2d +0x105:  mov    $0x40,%edx
0867ef32 +0x10a:  mov    %ebx,%edi
0867ef34 +0x10c:  mov    %edx,%ecx
0867ef36 +0x10e:  rep stos %eax,%es:(%edi)
0867ef38 +0x110:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0867ef3d +0x115:  mov    %eax,(%esp)
0867ef40 +0x118:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
0867ef45 +0x11d:  mov    %eax,0x8(%esp)
0867ef49 +0x121:  movl   $"./log/%s/BlackList",0x4(%esp)
0867ef51 +0x129:  lea    -0x118(%ebp),%eax
0867ef57 +0x12f:  mov    %eax,(%esp)
0867ef5a +0x132:  call   0807e440 <_init+0xd38>
0867ef5f +0x137:  movl   $0x7d57,0x8(%esp)
0867ef67 +0x13f:  movl   $&_ZZN5CUser14printBlackListEvE19__PRETTY_FUNCTION__,0x4(%esp)
0867ef6f +0x147:  lea    -0x10(%ebp),%eax
0867ef72 +0x14a:  mov    %eax,(%esp)
0867ef75 +0x14d:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
0867ef7a +0x152:  lea    -0x518(%ebp),%eax
0867ef80 +0x158:  mov    %eax,0xc(%esp)
0867ef84 +0x15c:  movl   $"%s",0x8(%esp)
0867ef8c +0x164:  lea    -0x118(%ebp),%eax
0867ef92 +0x16a:  mov    %eax,0x4(%esp)
0867ef96 +0x16e:  lea    -0x10(%ebp),%eax
0867ef99 +0x171:  mov    %eax,(%esp)
0867ef9c +0x174:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
0867efa1 +0x179:  jmp    0867efa4 <+0x17c>
0867efa3 +0x17b:  nop
0867efa4 +0x17c:  lea    -0x8(%ebp),%esp
0867efa7 +0x17f:  add    $0x0,%esp
0867efaa +0x182:  pop    %ebx
0867efab +0x183:  pop    %edi
0867efac +0x184:  pop    %ebp
0867efad +0x185:  ret
```

## 反编译 C

```c
// CUser::printBlackList @ 0x867ee28

/* CUser::printBlackList() */

void CUser::printBlackList(void)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  CEnvironment *this;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  char local_51c [1024];
  char local_11c [256];
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  CMyFileLog local_14 [8];
  
  bVar7 = 0;
  cVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty();
  if (cVar1 == '\0') {
    pcVar6 = local_51c;
    for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
    }
    __gnu_cxx::
    __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
    __normal_iterator(local_1c);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    while( true ) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
      bVar2 = __gnu_cxx::operator!=(local_1c,local_18);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
               ::operator*(local_1c);
      sprintf(local_51c,"%s,%d",local_51c,*puVar3);
      __gnu_cxx::
      __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
      operator++(local_1c);
    }
    sprintf(local_51c,"%s\n",local_51c);
    pcVar6 = local_11c;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
    }
    this = (CEnvironment *)G_CEnvironment();
    uVar4 = CEnvironment::get_file_name(this);
    sprintf(local_11c,"./log/%s/BlackList",uVar4);
    CMyFileLog::CMyFileLog(local_14,"void CUser::printBlackList()",0x7d57);
    CMyFileLog::operator()(local_14,local_11c,"%s",local_51c);
  }
  return;
}
```
