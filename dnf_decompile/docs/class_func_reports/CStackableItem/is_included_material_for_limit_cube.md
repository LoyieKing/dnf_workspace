# is_included_material_for_limit_cube

`_ZN14CStackableItem35is_included_material_for_limit_cubeEj`

`CStackableItem::is_included_material_for_limit_cube(unsigned int)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850fa8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850fa8a  _ZN14CStackableItem35is_included_material_for_limit_cubeEj
#           CStackableItem::is_included_material_for_limit_cube(unsigned int)
# range [0x0850fa8a, 0x0850fb31]
0850fa8a +0x00:  push   %ebp
0850fa8b +0x01:  mov    %esp,%ebp
0850fa8d +0x03:  sub    $0x28,%esp
0850fa90 +0x06:  mov    0x8(%ebp),%eax
0850fa93 +0x09:  lea    0x290(%eax),%edx
0850fa99 +0x0f:  lea    -0x14(%ebp),%eax
0850fa9c +0x12:  mov    %edx,0x4(%esp)
0850faa0 +0x16:  mov    %eax,(%esp)
0850faa3 +0x19:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0850faa8 +0x1e:  sub    $0x4,%esp
0850faab +0x21:  lea    -0x14(%ebp),%eax
0850faae +0x24:  mov    %eax,0x4(%esp)
0850fab2 +0x28:  lea    -0x18(%ebp),%eax
0850fab5 +0x2b:  mov    %eax,(%esp)
0850fab8 +0x2e:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
0850fabd +0x33:  jmp    0850fafa <+0x70>
0850fabf +0x35:  lea    -0x18(%ebp),%eax
0850fac2 +0x38:  mov    %eax,(%esp)
0850fac5 +0x3b:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0850faca +0x40:  mov    (%eax),%eax
0850facc +0x42:  cmp    0xc(%ebp),%eax
0850facf +0x45:  sete   %al
0850fad2 +0x48:  test   %al,%al
0850fad4 +0x4a:  je     0850fadd <+0x53>
0850fad6 +0x4c:  mov    $0x1,%eax
0850fadb +0x51:  jmp    0850fb30 <+0xa6>
0850fadd +0x53:  lea    -0xc(%ebp),%eax
0850fae0 +0x56:  movl   $0x0,0x8(%esp)
0850fae8 +0x5e:  lea    -0x18(%ebp),%edx
0850faeb +0x61:  mov    %edx,0x4(%esp)
0850faef +0x65:  mov    %eax,(%esp)
0850faf2 +0x68:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
0850faf7 +0x6d:  sub    $0x4,%esp
0850fafa +0x70:  mov    0x8(%ebp),%eax
0850fafd +0x73:  lea    0x290(%eax),%edx
0850fb03 +0x79:  lea    -0x10(%ebp),%eax
0850fb06 +0x7c:  mov    %edx,0x4(%esp)
0850fb0a +0x80:  mov    %eax,(%esp)
0850fb0d +0x83:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0850fb12 +0x88:  sub    $0x4,%esp
0850fb15 +0x8b:  lea    -0x10(%ebp),%eax
0850fb18 +0x8e:  mov    %eax,0x4(%esp)
0850fb1c +0x92:  lea    -0x18(%ebp),%eax
0850fb1f +0x95:  mov    %eax,(%esp)
0850fb22 +0x98:  call   0838793c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173dc
0850fb27 +0x9d:  test   %al,%al
0850fb29 +0x9f:  jne    0850fabf <+0x35>
0850fb2b +0xa1:  mov    $0x0,%eax
0850fb30 +0xa6:  leave
0850fb31 +0xa7:  ret
```

## 反编译 C

```c
// CStackableItem::is_included_material_for_limit_cube @ 0x850fa8a

/* CStackableItem::is_included_material_for_limit_cube(unsigned int) */

undefined4 __thiscall
CStackableItem::is_included_material_for_limit_cube(CStackableItem *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_10 [12];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator<std::pair<int,int>*>(local_1c,local_18);
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                     ::operator->(local_1c);
    if (*puVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_10,(int)local_1c);
  }
  return 1;
}
```
