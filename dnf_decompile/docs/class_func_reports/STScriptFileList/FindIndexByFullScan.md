# FindIndexByFullScan

`_ZNK16STScriptFileList19FindIndexByFullScanEPKc`

`STScriptFileList::FindIndexByFullScan(char const*) const`

| 类 | 地址 |
|---|---|
| `STScriptFileList` | `0x088bae56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088bae56  _ZNK16STScriptFileList19FindIndexByFullScanEPKc
#           STScriptFileList::FindIndexByFullScan(char const*) const
# range [0x088bae56, 0x088baef1]
088bae56 +0x00:  push   %ebp
088bae57 +0x01:  mov    %esp,%ebp
088bae59 +0x03:  sub    $0x28,%esp
088bae5c +0x06:  mov    0x8(%ebp),%edx
088bae5f +0x09:  lea    -0x10(%ebp),%eax
088bae62 +0x0c:  mov    %edx,0x4(%esp)
088bae66 +0x10:  mov    %eax,(%esp)
088bae69 +0x13:  call   088c42e4 <_GLOBAL__I_g_script_package+0x1b4>  ; global constructors keyed to g_script_package+0x1b4
088bae6e +0x18:  sub    $0x4,%esp
088bae71 +0x1b:  mov    0x8(%ebp),%edx
088bae74 +0x1e:  lea    -0x14(%ebp),%eax
088bae77 +0x21:  mov    %edx,0x4(%esp)
088bae7b +0x25:  mov    %eax,(%esp)
088bae7e +0x28:  call   080c6e54 <_GLOBAL__I_g_ServerString_+0x3bf>  ; global constructors keyed to g_ServerString_+0x3bf
088bae83 +0x2d:  sub    $0x4,%esp
088bae86 +0x30:  jmp    088baed5 <+0x7f>
088bae88 +0x32:  lea    -0x10(%ebp),%eax
088bae8b +0x35:  mov    %eax,(%esp)
088bae8e +0x38:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
088bae93 +0x3d:  lea    0x4(%eax),%edx
088bae96 +0x40:  mov    0xc(%ebp),%eax
088bae99 +0x43:  mov    %eax,0x4(%esp)
088bae9d +0x47:  mov    %edx,(%esp)
088baea0 +0x4a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088baea5 +0x4f:  test   %al,%al
088baea7 +0x51:  je     088baeb8 <+0x62>
088baea9 +0x53:  lea    -0x10(%ebp),%eax
088baeac +0x56:  mov    %eax,(%esp)
088baeaf +0x59:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
088baeb4 +0x5e:  mov    (%eax),%eax
088baeb6 +0x60:  jmp    088baef0 <+0x9a>
088baeb8 +0x62:  lea    -0xc(%ebp),%eax
088baebb +0x65:  movl   $0x0,0x8(%esp)
088baec3 +0x6d:  lea    -0x10(%ebp),%edx
088baec6 +0x70:  mov    %edx,0x4(%esp)
088baeca +0x74:  mov    %eax,(%esp)
088baecd +0x77:  call   088c430a <_GLOBAL__I_g_script_package+0x1da>  ; global constructors keyed to g_script_package+0x1da
088baed2 +0x7c:  sub    $0x4,%esp
088baed5 +0x7f:  lea    -0x14(%ebp),%eax
088baed8 +0x82:  mov    %eax,0x4(%esp)
088baedc +0x86:  lea    -0x10(%ebp),%eax
088baedf +0x89:  mov    %eax,(%esp)
088baee2 +0x8c:  call   080c6e7a <_GLOBAL__I_g_ServerString_+0x3e5>  ; global constructors keyed to g_ServerString_+0x3e5
088baee7 +0x91:  test   %al,%al
088baee9 +0x93:  jne    088bae88 <+0x32>
088baeeb +0x95:  mov    $0xffffffff,%eax
088baef0 +0x9a:  leave
088baef1 +0x9b:  ret
```

## 反编译 C

```c
// STScriptFileList::FindIndexByFullScan @ 0x88bae56

/* STScriptFileList::FindIndexByFullScan(char const*) const */

undefined4 __thiscall STScriptFileList::FindIndexByFullScan(STScriptFileList *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_18 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_10 [12];
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_14);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_18);
  while( true ) {
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)local_14,
                       (_Rb_tree_const_iterator *)local_18);
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)local_14);
    bVar1 = std::operator==((string *)(iVar3 + 4),param_1);
    if (bVar1) break;
    std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator++
              (local_10,(int)local_14);
  }
  puVar4 = (undefined4 *)
           std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                     ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)local_14);
  return *puVar4;
}
```
