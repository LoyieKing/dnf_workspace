# GetEventRGBA

`_ZNK13np_server_xml10CServerXml12GetEventRGBAEi`

`np_server_xml::CServerXml::GetEventRGBA(int) const`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c67a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c67a0  _ZNK13np_server_xml10CServerXml12GetEventRGBAEi
#           np_server_xml::CServerXml::GetEventRGBA(int) const
# range [0x080c67a0, 0x080c6821]
080c67a0 +0x00:  push   %ebp
080c67a1 +0x01:  mov    %esp,%ebp
080c67a3 +0x03:  sub    $0x38,%esp
080c67a6 +0x06:  lea    -0x10(%ebp),%eax
080c67a9 +0x09:  mov    %eax,(%esp)
080c67ac +0x0c:  call   080c6e9c <_GLOBAL__I_g_ServerString_+0x407>  ; global constructors keyed to g_ServerString_+0x407
080c67b1 +0x11:  mov    0x8(%ebp),%eax
080c67b4 +0x14:  lea    0xa0(%eax),%ecx
080c67ba +0x1a:  lea    -0x1c(%ebp),%eax
080c67bd +0x1d:  lea    0xc(%ebp),%edx
080c67c0 +0x20:  mov    %edx,0x8(%esp)
080c67c4 +0x24:  mov    %ecx,0x4(%esp)
080c67c8 +0x28:  mov    %eax,(%esp)
080c67cb +0x2b:  call   080c6eaa <_GLOBAL__I_g_ServerString_+0x415>  ; global constructors keyed to g_ServerString_+0x415
080c67d0 +0x30:  sub    $0x4,%esp
080c67d3 +0x33:  mov    -0x1c(%ebp),%eax
080c67d6 +0x36:  mov    %eax,-0x10(%ebp)
080c67d9 +0x39:  mov    0x8(%ebp),%eax
080c67dc +0x3c:  lea    0xa0(%eax),%edx
080c67e2 +0x42:  lea    -0xc(%ebp),%eax
080c67e5 +0x45:  mov    %edx,0x4(%esp)
080c67e9 +0x49:  mov    %eax,(%esp)
080c67ec +0x4c:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
080c67f1 +0x51:  sub    $0x4,%esp
080c67f4 +0x54:  lea    -0xc(%ebp),%eax
080c67f7 +0x57:  mov    %eax,0x4(%esp)
080c67fb +0x5b:  lea    -0x10(%ebp),%eax
080c67fe +0x5e:  mov    %eax,(%esp)
080c6801 +0x61:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
080c6806 +0x66:  test   %al,%al
080c6808 +0x68:  je     080c681a <+0x7a>
080c680a +0x6a:  lea    -0x10(%ebp),%eax
080c680d +0x6d:  mov    %eax,(%esp)
080c6810 +0x70:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
080c6815 +0x75:  mov    0x4(%eax),%eax
080c6818 +0x78:  jmp    080c681f <+0x7f>
080c681a +0x7a:  mov    $0x0,%eax
080c681f +0x7f:  leave
080c6820 +0x80:  ret
080c6821 +0x81:  nop
```

## 反编译 C

```c
// np_server_xml::CServerXml::GetEventRGBA @ 0x80c67a0

/* np_server_xml::CServerXml::GetEventRGBA(int) const */

undefined4 np_server_xml::CServerXml::GetEventRGBA(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [3];
  int local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find(local_20);
  local_14 = local_20[0];
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                    ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_14,
                     (_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
