# UseLimitItem

`_ZN5CUser12UseLimitItemEib`

`CUser::UseLimitItem(int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08688ae6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08688ae6  _ZN5CUser12UseLimitItemEib
#           CUser::UseLimitItem(int, bool)
# range [0x08688ae6, 0x08688c6f]
08688ae6 +0x000:  push   %ebp
08688ae7 +0x001:  mov    %esp,%ebp
08688ae9 +0x003:  push   %edi
08688aea +0x004:  push   %esi
08688aeb +0x005:  push   %ebx
08688aec +0x006:  sub    $0x4c,%esp
08688aef +0x009:  mov    0x10(%ebp),%eax
08688af2 +0x00c:  mov    %al,-0x2c(%ebp)
08688af5 +0x00f:  movb   $0x1,-0x19(%ebp)
08688af9 +0x013:  mov    0x8(%ebp),%eax
08688afc +0x016:  lea    0x8cf68(%eax),%edx
08688b02 +0x01c:  lea    -0x24(%ebp),%eax
08688b05 +0x01f:  mov    %edx,0x4(%esp)
08688b09 +0x023:  mov    %eax,(%esp)
08688b0c +0x026:  call   0869c5da <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8e2f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8e2f
08688b11 +0x02b:  sub    $0x4,%esp
08688b14 +0x02e:  mov    0x8(%ebp),%eax
08688b17 +0x031:  lea    0x8cf68(%eax),%edx
08688b1d +0x037:  lea    -0x28(%ebp),%eax
08688b20 +0x03a:  mov    %edx,0x4(%esp)
08688b24 +0x03e:  mov    %eax,(%esp)
08688b27 +0x041:  call   0869c5fe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8e53>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8e53
08688b2c +0x046:  sub    $0x4,%esp
08688b2f +0x049:  jmp    08688c46 <+0x160>
08688b34 +0x04e:  lea    -0x24(%ebp),%eax
08688b37 +0x051:  mov    %eax,(%esp)
08688b3a +0x054:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688b3f +0x059:  mov    0x15(%eax),%eax
08688b42 +0x05c:  cmp    0xc(%ebp),%eax
08688b45 +0x05f:  sete   %al
08688b48 +0x062:  test   %al,%al
08688b4a +0x064:  je     08688c29 <+0x143>
08688b50 +0x06a:  lea    -0x24(%ebp),%eax
08688b53 +0x06d:  mov    %eax,(%esp)
08688b56 +0x070:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688b5b +0x075:  mov    %eax,(%esp)
08688b5e +0x078:  call   08695f68 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x27bd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x27bd
08688b63 +0x07d:  xor    $0x1,%eax
08688b66 +0x080:  test   %al,%al
08688b68 +0x082:  je     08688b6e <+0x88>
08688b6a +0x084:  movb   $0x0,-0x19(%ebp)
08688b6e +0x088:  cmpb   $0x0,-0x2c(%ebp)
08688b72 +0x08c:  je     08688baa <+0xc4>
08688b74 +0x08e:  lea    -0x24(%ebp),%eax
08688b77 +0x091:  mov    %eax,(%esp)
08688b7a +0x094:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688b7f +0x099:  mov    0x19(%eax),%ebx
08688b82 +0x09c:  lea    -0x24(%ebp),%eax
08688b85 +0x09f:  mov    %eax,(%esp)
08688b88 +0x0a2:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688b8d +0x0a7:  mov    0x11(%eax),%eax
08688b90 +0x0aa:  mov    %ebx,0xc(%esp)
08688b94 +0x0ae:  mov    %eax,0x8(%esp)
08688b98 +0x0b2:  mov    0xc(%ebp),%eax
08688b9b +0x0b5:  mov    %eax,0x4(%esp)
08688b9f +0x0b9:  mov    0x8(%ebp),%eax
08688ba2 +0x0bc:  mov    %eax,(%esp)
08688ba5 +0x0bf:  call   08688f02 <_ZN5CUser26SendLimitItemUsageNotiInfoEiii>  ; CUser::SendLimitItemUsageNotiInfo(int, int, int)
08688baa +0x0c4:  lea    -0x24(%ebp),%eax
08688bad +0x0c7:  mov    %eax,(%esp)
08688bb0 +0x0ca:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688bb5 +0x0cf:  mov    %eax,(%esp)
08688bb8 +0x0d2:  call   08695f28 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x277d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x277d
08688bbd +0x0d7:  test   %al,%al
08688bbf +0x0d9:  je     08688c23 <+0x13d>
08688bc1 +0x0db:  lea    -0x24(%ebp),%eax
08688bc4 +0x0de:  mov    %eax,(%esp)
08688bc7 +0x0e1:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688bcc +0x0e6:  mov    0xc(%eax),%edi
08688bcf +0x0e9:  lea    -0x24(%ebp),%eax
08688bd2 +0x0ec:  mov    %eax,(%esp)
08688bd5 +0x0ef:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688bda +0x0f4:  mov    0x19(%eax),%esi
08688bdd +0x0f7:  lea    -0x24(%ebp),%eax
08688be0 +0x0fa:  mov    %eax,(%esp)
08688be3 +0x0fd:  call   0869c684 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ed9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ed9
08688be8 +0x102:  movzbl 0x10(%eax),%eax
08688bec +0x106:  movsbl %al,%ebx
08688bef +0x109:  movl   $0xffffffff,0x4(%esp)
08688bf7 +0x111:  mov    0x8(%ebp),%eax
08688bfa +0x114:  mov    %eax,(%esp)
08688bfd +0x117:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08688c02 +0x11c:  mov    %edi,0x10(%esp)
08688c06 +0x120:  mov    %esi,0xc(%esp)
08688c0a +0x124:  mov    0xc(%ebp),%edx
08688c0d +0x127:  mov    %edx,0x8(%esp)
08688c11 +0x12b:  mov    %ebx,0x4(%esp)
08688c15 +0x12f:  mov    %eax,(%esp)
08688c18 +0x132:  call   0843f030 <_ZN23DB_UpdateLimitItemUsage11makeRequestEiiiil>  ; DB_UpdateLimitItemUsage::makeRequest(int, int, int, int, long)
08688c1d +0x137:  movb   $0x1,-0x19(%ebp)
08688c21 +0x13b:  jmp    08688c60 <+0x17a>
08688c23 +0x13d:  movb   $0x0,-0x19(%ebp)
08688c27 +0x141:  jmp    08688c60 <+0x17a>
08688c29 +0x143:  lea    -0x20(%ebp),%eax
08688c2c +0x146:  movl   $0x0,0x8(%esp)
08688c34 +0x14e:  lea    -0x24(%ebp),%edx
08688c37 +0x151:  mov    %edx,0x4(%esp)
08688c3b +0x155:  mov    %eax,(%esp)
08688c3e +0x158:  call   0869c650 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ea5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ea5
08688c43 +0x15d:  sub    $0x4,%esp
08688c46 +0x160:  lea    -0x28(%ebp),%eax
08688c49 +0x163:  mov    %eax,0x4(%esp)
08688c4d +0x167:  lea    -0x24(%ebp),%eax
08688c50 +0x16a:  mov    %eax,(%esp)
08688c53 +0x16d:  call   0869c624 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8e79>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8e79
08688c58 +0x172:  test   %al,%al
08688c5a +0x174:  jne    08688b34 <+0x4e>
08688c60 +0x17a:  movzbl -0x19(%ebp),%eax
08688c64 +0x17e:  lea    -0xc(%ebp),%esp
08688c67 +0x181:  add    $0x0,%esp
08688c6a +0x184:  pop    %ebx
08688c6b +0x185:  pop    %esi
08688c6c +0x186:  pop    %edi
08688c6d +0x187:  pop    %ebp
08688c6e +0x188:  ret
08688c6f +0x189:  nop
```

## 反编译 C

```c
// CUser::UseLimitItem @ 0x8688ae6

/* CUser::UseLimitItem(int, bool) */

undefined1 __thiscall CUser::UseLimitItem(CUser *this,int param_1,bool param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  LimitItemUsage *pLVar5;
  int iVar6;
  __normal_iterator local_2c [4];
  __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
  local_28 [4];
  __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
  local_24 [7];
  undefined1 local_1d;
  
  local_1d = 1;
  std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::begin();
  std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::end();
  while( true ) {
    bVar3 = __gnu_cxx::operator!=(local_28,local_2c);
    if (!bVar3) {
      return local_1d;
    }
    iVar4 = __gnu_cxx::
            __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
            ::operator->(local_28);
    if (*(int *)(iVar4 + 0x15) == param_1) break;
    __gnu_cxx::
    __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>::
    operator++(local_24,(int)local_28);
  }
  pLVar5 = (LimitItemUsage *)
           __gnu_cxx::
           __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
           ::operator->(local_28);
  cVar2 = LimitItemUsage::isUsable(pLVar5);
  if (cVar2 != '\x01') {
    local_1d = 0;
  }
  if (param_2) {
    iVar4 = __gnu_cxx::
            __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
            ::operator->(local_28);
    iVar4 = *(int *)(iVar4 + 0x19);
    iVar6 = __gnu_cxx::
            __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
            ::operator->(local_28);
    SendLimitItemUsageNotiInfo(this,param_1,*(int *)(iVar6 + 0x11),iVar4);
  }
  pLVar5 = (LimitItemUsage *)
           __gnu_cxx::
           __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
           ::operator->(local_28);
  cVar2 = LimitItemUsage::useIt(pLVar5);
  if (cVar2 != '\0') {
    iVar4 = __gnu_cxx::
            __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
            ::operator->(local_28);
    lVar1 = *(long *)(iVar4 + 0xc);
    iVar4 = __gnu_cxx::
            __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
            ::operator->(local_28);
    iVar4 = *(int *)(iVar4 + 0x19);
    iVar6 = __gnu_cxx::
            __normal_iterator<LimitItemUsage*,std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>>
            ::operator->(local_28);
    cVar2 = *(char *)(iVar6 + 0x10);
    iVar6 = get_charac_no(this,-1);
    DB_UpdateLimitItemUsage::makeRequest(iVar6,(int)cVar2,param_1,iVar4,lVar1);
    return 1;
  }
  return 0;
}
```
