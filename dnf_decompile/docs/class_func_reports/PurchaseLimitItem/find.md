# find

`_ZN17PurchaseLimitItem4findEjRNS_4InfoE`

`PurchaseLimitItem::find(unsigned int, PurchaseLimitItem::Info&)`

| 类 | 地址 |
|---|---|
| `PurchaseLimitItem` | `0x081a2310` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a2310  _ZN17PurchaseLimitItem4findEjRNS_4InfoE
#           PurchaseLimitItem::find(unsigned int, PurchaseLimitItem::Info&)
# range [0x081a2310, 0x081a2389]
081a2310 +0x00:  push   %ebp
081a2311 +0x01:  mov    %esp,%ebp
081a2313 +0x03:  sub    $0x28,%esp
081a2316 +0x06:  mov    0x8(%ebp),%eax
081a2319 +0x09:  lea    0x4(%eax),%ecx
081a231c +0x0c:  lea    -0x10(%ebp),%eax
081a231f +0x0f:  lea    0xc(%ebp),%edx
081a2322 +0x12:  mov    %edx,0x8(%esp)
081a2326 +0x16:  mov    %ecx,0x4(%esp)
081a232a +0x1a:  mov    %eax,(%esp)
081a232d +0x1d:  call   081a439e <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x3f9>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x3f9
081a2332 +0x22:  sub    $0x4,%esp
081a2335 +0x25:  mov    0x8(%ebp),%eax
081a2338 +0x28:  lea    0x4(%eax),%edx
081a233b +0x2b:  lea    -0xc(%ebp),%eax
081a233e +0x2e:  mov    %edx,0x4(%esp)
081a2342 +0x32:  mov    %eax,(%esp)
081a2345 +0x35:  call   081a43ca <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x425>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x425
081a234a +0x3a:  sub    $0x4,%esp
081a234d +0x3d:  lea    -0xc(%ebp),%eax
081a2350 +0x40:  mov    %eax,0x4(%esp)
081a2354 +0x44:  lea    -0x10(%ebp),%eax
081a2357 +0x47:  mov    %eax,(%esp)
081a235a +0x4a:  call   081a43f0 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x44b>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x44b
081a235f +0x4f:  test   %al,%al
081a2361 +0x51:  je     081a2383 <+0x73>
081a2363 +0x53:  lea    -0x10(%ebp),%eax
081a2366 +0x56:  mov    %eax,(%esp)
081a2369 +0x59:  call   081a4404 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x45f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x45f
081a236e +0x5e:  mov    0x10(%ebp),%ecx
081a2371 +0x61:  mov    0x8(%eax),%edx
081a2374 +0x64:  mov    0x4(%eax),%eax
081a2377 +0x67:  mov    %eax,(%ecx)
081a2379 +0x69:  mov    %edx,0x4(%ecx)
081a237c +0x6c:  mov    $0x1,%eax
081a2381 +0x71:  jmp    081a2388 <+0x78>
081a2383 +0x73:  mov    $0x0,%eax
081a2388 +0x78:  leave
081a2389 +0x79:  ret
```

## 反编译 C

```c
// PurchaseLimitItem::find @ 0x81a2310

/* PurchaseLimitItem::find(unsigned int, PurchaseLimitItem::Info&) */

bool __thiscall PurchaseLimitItem::find(PurchaseLimitItem *this,uint param_1,Info *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>> local_14 [4];
  map<unsigned_int,PurchaseLimitItem::Info,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>>
  local_10 [12];
  
  std::
  map<unsigned_int,PurchaseLimitItem::Info,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,PurchaseLimitItem::Info,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>::
            operator->(local_14);
    uVar1 = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return cVar2 != '\0';
}
```
