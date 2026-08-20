# GetMail

`_ZNK8WongWork8CMailBox7GetMailEj`

`WongWork::CMailBox::GetMail(unsigned int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox` | `0x085522c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085522c4  _ZNK8WongWork8CMailBox7GetMailEj
#           WongWork::CMailBox::GetMail(unsigned int) const
# range [0x085522c4, 0x0855232d]
085522c4 +0x00:  push   %ebp
085522c5 +0x01:  mov    %esp,%ebp
085522c7 +0x03:  sub    $0x28,%esp
085522ca +0x06:  mov    0x8(%ebp),%eax
085522cd +0x09:  lea    0x40(%eax),%ecx
085522d0 +0x0c:  lea    -0x10(%ebp),%eax
085522d3 +0x0f:  lea    0xc(%ebp),%edx
085522d6 +0x12:  mov    %edx,0x8(%esp)
085522da +0x16:  mov    %ecx,0x4(%esp)
085522de +0x1a:  mov    %eax,(%esp)
085522e1 +0x1d:  call   08558684 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x11e5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x11e5
085522e6 +0x22:  sub    $0x4,%esp
085522e9 +0x25:  mov    0x8(%ebp),%eax
085522ec +0x28:  lea    0x40(%eax),%edx
085522ef +0x2b:  lea    -0xc(%ebp),%eax
085522f2 +0x2e:  mov    %edx,0x4(%esp)
085522f6 +0x32:  mov    %eax,(%esp)
085522f9 +0x35:  call   085586b0 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1211>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1211
085522fe +0x3a:  sub    $0x4,%esp
08552301 +0x3d:  lea    -0xc(%ebp),%eax
08552304 +0x40:  mov    %eax,0x4(%esp)
08552308 +0x44:  lea    -0x10(%ebp),%eax
0855230b +0x47:  mov    %eax,(%esp)
0855230e +0x4a:  call   085586d6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1237>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1237
08552313 +0x4f:  test   %al,%al
08552315 +0x51:  je     0855231e <+0x5a>
08552317 +0x53:  mov    $0x0,%eax
0855231c +0x58:  jmp    0855232c <+0x68>
0855231e +0x5a:  lea    -0x10(%ebp),%eax
08552321 +0x5d:  mov    %eax,(%esp)
08552324 +0x60:  call   085586ea <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x124b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x124b
08552329 +0x65:  mov    0x4(%eax),%eax
0855232c +0x68:  leave
0855232d +0x69:  ret
```

## 反编译 C

```c
// WongWork::CMailBox::GetMail @ 0x85522c4

/* WongWork::CMailBox::GetMail(unsigned int) const */

undefined4 WongWork::CMailBox::GetMail(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_14 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
          operator==(local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
            operator->(local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
