# get_1st_material_count

`_ZN14CStackableItem22get_1st_material_countEj`

`CStackableItem::get_1st_material_count(unsigned int)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850fb32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850fb32  _ZN14CStackableItem22get_1st_material_countEj
#           CStackableItem::get_1st_material_count(unsigned int)
# range [0x0850fb32, 0x0850fbe3]
0850fb32 +0x00:  push   %ebp
0850fb33 +0x01:  mov    %esp,%ebp
0850fb35 +0x03:  sub    $0x28,%esp
0850fb38 +0x06:  mov    0x8(%ebp),%eax
0850fb3b +0x09:  lea    0x290(%eax),%edx
0850fb41 +0x0f:  lea    -0x14(%ebp),%eax
0850fb44 +0x12:  mov    %edx,0x4(%esp)
0850fb48 +0x16:  mov    %eax,(%esp)
0850fb4b +0x19:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0850fb50 +0x1e:  sub    $0x4,%esp
0850fb53 +0x21:  lea    -0x14(%ebp),%eax
0850fb56 +0x24:  mov    %eax,0x4(%esp)
0850fb5a +0x28:  lea    -0x18(%ebp),%eax
0850fb5d +0x2b:  mov    %eax,(%esp)
0850fb60 +0x2e:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
0850fb65 +0x33:  jmp    0850fbab <+0x79>
0850fb67 +0x35:  lea    -0x18(%ebp),%eax
0850fb6a +0x38:  mov    %eax,(%esp)
0850fb6d +0x3b:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0850fb72 +0x40:  mov    (%eax),%eax
0850fb74 +0x42:  cmp    0xc(%ebp),%eax
0850fb77 +0x45:  sete   %al
0850fb7a +0x48:  test   %al,%al
0850fb7c +0x4a:  je     0850fb8e <+0x5c>
0850fb7e +0x4c:  lea    -0x18(%ebp),%eax
0850fb81 +0x4f:  mov    %eax,(%esp)
0850fb84 +0x52:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0850fb89 +0x57:  mov    0x4(%eax),%eax
0850fb8c +0x5a:  jmp    0850fbe1 <+0xaf>
0850fb8e +0x5c:  lea    -0xc(%ebp),%eax
0850fb91 +0x5f:  movl   $0x0,0x8(%esp)
0850fb99 +0x67:  lea    -0x18(%ebp),%edx
0850fb9c +0x6a:  mov    %edx,0x4(%esp)
0850fba0 +0x6e:  mov    %eax,(%esp)
0850fba3 +0x71:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
0850fba8 +0x76:  sub    $0x4,%esp
0850fbab +0x79:  mov    0x8(%ebp),%eax
0850fbae +0x7c:  lea    0x290(%eax),%edx
0850fbb4 +0x82:  lea    -0x10(%ebp),%eax
0850fbb7 +0x85:  mov    %edx,0x4(%esp)
0850fbbb +0x89:  mov    %eax,(%esp)
0850fbbe +0x8c:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0850fbc3 +0x91:  sub    $0x4,%esp
0850fbc6 +0x94:  lea    -0x10(%ebp),%eax
0850fbc9 +0x97:  mov    %eax,0x4(%esp)
0850fbcd +0x9b:  lea    -0x18(%ebp),%eax
0850fbd0 +0x9e:  mov    %eax,(%esp)
0850fbd3 +0xa1:  call   0838793c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173dc
0850fbd8 +0xa6:  test   %al,%al
0850fbda +0xa8:  jne    0850fb67 <+0x35>
0850fbdc +0xaa:  mov    $0xffffffff,%eax
0850fbe1 +0xaf:  leave
0850fbe2 +0xb0:  ret
0850fbe3 +0xb1:  nop
```

## 反编译 C

```c
// CStackableItem::get_1st_material_count @ 0x850fb32

/* CStackableItem::get_1st_material_count(unsigned int) */

undefined4 __thiscall CStackableItem::get_1st_material_count(CStackableItem *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
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
      return 0xffffffff;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                     ::operator->(local_1c);
    if (*puVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_10,(int)local_1c);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator->(local_1c);
  return *(undefined4 *)(iVar3 + 4);
}
```
