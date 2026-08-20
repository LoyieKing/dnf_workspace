# getByAP

`_ZN16CAICharacterList7getByAPEj`

`CAICharacterList::getByAP(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAICharacterList` | `0x0834aaf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834aaf4  _ZN16CAICharacterList7getByAPEj
#           CAICharacterList::getByAP(unsigned int)
# range [0x0834aaf4, 0x0834acc3]
0834aaf4 +0x000:  push   %ebp
0834aaf5 +0x001:  mov    %esp,%ebp
0834aaf7 +0x003:  push   %ebx
0834aaf8 +0x004:  sub    $0x44,%esp
0834aafb +0x007:  mov    0x8(%ebp),%eax
0834aafe +0x00a:  add    $0x4c0,%eax
0834ab03 +0x00f:  mov    %eax,(%esp)
0834ab06 +0x012:  call   08388c32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x186d2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x186d2
0834ab0b +0x017:  test   %al,%al
0834ab0d +0x019:  je     0834ab19 <+0x25>
0834ab0f +0x01b:  mov    $0x0,%eax
0834ab14 +0x020:  jmp    0834acbe <+0x1ca>
0834ab19 +0x025:  mov    0xc(%ebp),%eax
0834ab1c +0x028:  mov    %eax,-0x24(%ebp)
0834ab1f +0x02b:  mov    0x8(%ebp),%eax
0834ab22 +0x02e:  lea    0x4c0(%eax),%ecx
0834ab28 +0x034:  lea    -0x28(%ebp),%eax
0834ab2b +0x037:  lea    -0x24(%ebp),%edx
0834ab2e +0x03a:  mov    %edx,0x8(%esp)
0834ab32 +0x03e:  mov    %ecx,0x4(%esp)
0834ab36 +0x042:  mov    %eax,(%esp)
0834ab39 +0x045:  call   08388c46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x186e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x186e6
0834ab3e +0x04a:  sub    $0x4,%esp
0834ab41 +0x04d:  lea    -0x28(%ebp),%eax
0834ab44 +0x050:  mov    %eax,0x4(%esp)
0834ab48 +0x054:  lea    -0x2c(%ebp),%eax
0834ab4b +0x057:  mov    %eax,(%esp)
0834ab4e +0x05a:  call   08388c72 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18712>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18712
0834ab53 +0x05f:  mov    0x8(%ebp),%eax
0834ab56 +0x062:  lea    0x4c0(%eax),%edx
0834ab5c +0x068:  lea    -0x1c(%ebp),%eax
0834ab5f +0x06b:  mov    %edx,0x4(%esp)
0834ab63 +0x06f:  mov    %eax,(%esp)
0834ab66 +0x072:  call   08388a4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x184ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x184ee
0834ab6b +0x077:  sub    $0x4,%esp
0834ab6e +0x07a:  lea    -0x1c(%ebp),%eax
0834ab71 +0x07d:  mov    %eax,0x4(%esp)
0834ab75 +0x081:  lea    -0x20(%ebp),%eax
0834ab78 +0x084:  mov    %eax,(%esp)
0834ab7b +0x087:  call   08388c72 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18712>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18712
0834ab80 +0x08c:  lea    -0x20(%ebp),%eax
0834ab83 +0x08f:  mov    %eax,0x4(%esp)
0834ab87 +0x093:  lea    -0x2c(%ebp),%eax
0834ab8a +0x096:  mov    %eax,(%esp)
0834ab8d +0x099:  call   08388c82 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18722>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18722
0834ab92 +0x09e:  test   %al,%al
0834ab94 +0x0a0:  je     0834abd4 <+0xe0>
0834ab96 +0x0a2:  mov    0x8(%ebp),%eax
0834ab99 +0x0a5:  lea    0x4c0(%eax),%edx
0834ab9f +0x0ab:  lea    -0x14(%ebp),%eax
0834aba2 +0x0ae:  mov    %edx,0x4(%esp)
0834aba6 +0x0b2:  mov    %eax,(%esp)
0834aba9 +0x0b5:  call   08388a4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x184ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x184ee
0834abae +0x0ba:  sub    $0x4,%esp
0834abb1 +0x0bd:  lea    -0x14(%ebp),%eax
0834abb4 +0x0c0:  mov    %eax,0x4(%esp)
0834abb8 +0x0c4:  lea    -0x18(%ebp),%eax
0834abbb +0x0c7:  mov    %eax,(%esp)
0834abbe +0x0ca:  call   08388c72 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18712>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18712
0834abc3 +0x0cf:  mov    -0x18(%ebp),%eax
0834abc6 +0x0d2:  mov    %eax,-0x2c(%ebp)
0834abc9 +0x0d5:  lea    -0x2c(%ebp),%eax
0834abcc +0x0d8:  mov    %eax,(%esp)
0834abcf +0x0db:  call   08388c96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18736>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18736
0834abd4 +0x0e0:  lea    -0x2c(%ebp),%eax
0834abd7 +0x0e3:  mov    %eax,(%esp)
0834abda +0x0e6:  call   08388cb4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18754>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18754
0834abdf +0x0eb:  mov    (%eax),%eax
0834abe1 +0x0ed:  cmp    0xc(%ebp),%eax
0834abe4 +0x0f0:  jbe    0834ac30 <+0x13c>
0834abe6 +0x0f2:  mov    0x8(%ebp),%eax
0834abe9 +0x0f5:  lea    0x4c0(%eax),%edx
0834abef +0x0fb:  lea    -0xc(%ebp),%eax
0834abf2 +0x0fe:  mov    %edx,0x4(%esp)
0834abf6 +0x102:  mov    %eax,(%esp)
0834abf9 +0x105:  call   08388cc2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18762>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18762
0834abfe +0x10a:  sub    $0x4,%esp
0834ac01 +0x10d:  lea    -0xc(%ebp),%eax
0834ac04 +0x110:  mov    %eax,0x4(%esp)
0834ac08 +0x114:  lea    -0x10(%ebp),%eax
0834ac0b +0x117:  mov    %eax,(%esp)
0834ac0e +0x11a:  call   08388c72 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18712>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18712
0834ac13 +0x11f:  lea    -0x10(%ebp),%eax
0834ac16 +0x122:  mov    %eax,0x4(%esp)
0834ac1a +0x126:  lea    -0x2c(%ebp),%eax
0834ac1d +0x129:  mov    %eax,(%esp)
0834ac20 +0x12c:  call   08388ce8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18788>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18788
0834ac25 +0x131:  test   %al,%al
0834ac27 +0x133:  je     0834ac30 <+0x13c>
0834ac29 +0x135:  mov    $0x1,%eax
0834ac2e +0x13a:  jmp    0834ac35 <+0x141>
0834ac30 +0x13c:  mov    $0x0,%eax
0834ac35 +0x141:  test   %al,%al
0834ac37 +0x143:  je     0834ac44 <+0x150>
0834ac39 +0x145:  lea    -0x2c(%ebp),%eax
0834ac3c +0x148:  mov    %eax,(%esp)
0834ac3f +0x14b:  call   08388c96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18736>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18736
0834ac44 +0x150:  lea    -0x2c(%ebp),%eax
0834ac47 +0x153:  mov    %eax,(%esp)
0834ac4a +0x156:  call   08388cb4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18754>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18754
0834ac4f +0x15b:  add    $0x4,%eax
0834ac52 +0x15e:  mov    %eax,(%esp)
0834ac55 +0x161:  call   08388bea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1868a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1868a
0834ac5a +0x166:  cmp    $0x1,%eax
0834ac5d +0x169:  sete   %al
0834ac60 +0x16c:  test   %al,%al
0834ac62 +0x16e:  je     0834ac82 <+0x18e>
0834ac64 +0x170:  lea    -0x2c(%ebp),%eax
0834ac67 +0x173:  mov    %eax,(%esp)
0834ac6a +0x176:  call   08388cb4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18754>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18754
0834ac6f +0x17b:  add    $0x4,%eax
0834ac72 +0x17e:  movl   $0x0,0x4(%esp)
0834ac7a +0x186:  mov    %eax,(%esp)
0834ac7d +0x189:  call   08388cfc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1879c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1879c
0834ac82 +0x18e:  lea    -0x2c(%ebp),%eax
0834ac85 +0x191:  mov    %eax,(%esp)
0834ac88 +0x194:  call   08388cb4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18754>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18754
0834ac8d +0x199:  add    $0x4,%eax
0834ac90 +0x19c:  mov    %eax,(%esp)
0834ac93 +0x19f:  call   08388bea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1868a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1868a
0834ac98 +0x1a4:  mov    %eax,(%esp)
0834ac9b +0x1a7:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834aca0 +0x1ac:  mov    %eax,%ebx
0834aca2 +0x1ae:  lea    -0x2c(%ebp),%eax
0834aca5 +0x1b1:  mov    %eax,(%esp)
0834aca8 +0x1b4:  call   08388cb4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18754>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18754
0834acad +0x1b9:  add    $0x4,%eax
0834acb0 +0x1bc:  mov    %ebx,0x4(%esp)
0834acb4 +0x1c0:  mov    %eax,(%esp)
0834acb7 +0x1c3:  call   08388cfc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1879c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1879c
0834acbc +0x1c8:  mov    (%eax),%eax
0834acbe +0x1ca:  mov    -0x4(%ebp),%ebx
0834acc1 +0x1cd:  leave
0834acc2 +0x1ce:  ret
0834acc3 +0x1cf:  nop
```

## 反编译 C

```c
// CAICharacterList::getByAP @ 0x834aaf4

/* CAICharacterList::getByAP(unsigned int) */

undefined4 __thiscall CAICharacterList::getByAP(CAICharacterList *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_30;
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_2c [4];
  uint local_28;
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  local_24 [4];
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_20 [4];
  undefined4 local_1c;
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  local_14 [4];
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_10 [8];
  
  cVar2 = std::
          map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
          ::empty((map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
                   *)(this + 0x4c0));
  if (cVar2 != '\0') {
    return 0;
  }
  local_28 = param_1;
  std::
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  ::lower_bound(local_2c,(int *)(this + 0x4c0));
  std::
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  ::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
              *)&local_30,(_Rb_tree_iterator *)local_2c);
  std::
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  ::end(local_20);
  std::
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  ::_Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_20);
  cVar2 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
          ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                        *)&local_30,(_Rb_tree_const_iterator *)local_24);
  if (cVar2 != '\0') {
    std::
    map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
    ::end(local_18);
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
    ::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                *)&local_1c,(_Rb_tree_iterator *)local_18);
    local_30 = local_1c;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
    ::operator--((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                  *)&local_30);
  }
  puVar3 = (uint *)std::
                   _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                   ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                                 *)&local_30);
  if (param_1 < *puVar3) {
    std::
    map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
    ::begin(local_10);
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
    ::_Rb_tree_const_iterator(local_14,(_Rb_tree_iterator *)local_10);
    cVar2 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                          *)&local_30,(_Rb_tree_const_iterator *)local_14);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0834ac35;
    }
  }
  bVar1 = false;
LAB_0834ac35:
  if (bVar1) {
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
    ::operator--((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                  *)&local_30);
  }
  iVar4 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
          ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                        *)&local_30);
  iVar4 = std::vector<CAICharacter*,std::allocator<CAICharacter*>>::size
                    ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4));
  if (iVar4 == 1) {
    iVar4 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                          *)&local_30);
    std::vector<CAICharacter*,std::allocator<CAICharacter*>>::at
              ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4),0);
  }
  iVar4 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
          ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                        *)&local_30);
  iVar4 = std::vector<CAICharacter*,std::allocator<CAICharacter*>>::size
                    ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4));
  uVar5 = get_rand_int(iVar4);
  iVar4 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
          ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                        *)&local_30);
  puVar6 = (undefined4 *)
           std::vector<CAICharacter*,std::allocator<CAICharacter*>>::at
                     ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4),uVar5);
  return *puVar6;
}
```
