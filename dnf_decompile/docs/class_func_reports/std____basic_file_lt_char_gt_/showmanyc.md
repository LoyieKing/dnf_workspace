# showmanyc

`_ZNSt12__basic_fileIcE9showmanycEv`

`std::__basic_file<char>::showmanyc()`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722750  _ZNSt12__basic_fileIcE9showmanycEv
#           std::__basic_file<char>::showmanyc()
# range [0x08722750, 0x0872287f]
08722750 +0x000:  push   %ebp
08722751 +0x001:  mov    %esp,%ebp
08722753 +0x003:  sub    $0x98,%esp
08722759 +0x009:  mov    %edi,-0x4(%ebp)
0872275c +0x00c:  mov    0x8(%ebp),%edi
0872275f +0x00f:  mov    %ebx,-0xc(%ebp)
08722762 +0x012:  mov    %esi,-0x8(%ebp)
08722765 +0x015:  movl   $0x0,-0x1c(%ebp)
0872276c +0x01c:  mov    (%edi),%eax
0872276e +0x01e:  mov    %eax,(%esp)
08722771 +0x021:  call   0807e6d0 <_init+0xfc8>
08722776 +0x026:  lea    -0x1c(%ebp),%edx
08722779 +0x029:  mov    %edx,0x8(%esp)
0872277d +0x02d:  movl   $0x541b,0x4(%esp)
08722785 +0x035:  mov    %eax,(%esp)
08722788 +0x038:  call   0807e2b0 <_init+0xba8>
0872278d +0x03d:  test   %eax,%eax
0872278f +0x03f:  jne    087227a8 <+0x58>
08722791 +0x041:  mov    -0x1c(%ebp),%ebx
08722794 +0x044:  test   %ebx,%ebx
08722796 +0x046:  js     087227a8 <+0x58>
08722798 +0x048:  mov    %ebx,%eax
0872279a +0x04a:  mov    -0x8(%ebp),%esi
0872279d +0x04d:  mov    -0xc(%ebp),%ebx
087227a0 +0x050:  mov    -0x4(%ebp),%edi
087227a3 +0x053:  mov    %ebp,%esp
087227a5 +0x055:  pop    %ebp
087227a6 +0x056:  ret
087227a7 +0x057:  nop
087227a8 +0x058:  mov    (%edi),%eax
087227aa +0x05a:  mov    %eax,(%esp)
087227ad +0x05d:  call   0807e6d0 <_init+0xfc8>
087227b2 +0x062:  movw   $0x1,-0x20(%ebp)
087227b8 +0x068:  movl   $0x0,0x8(%esp)
087227c0 +0x070:  movl   $0x1,0x4(%esp)
087227c8 +0x078:  mov    %eax,-0x24(%ebp)
087227cb +0x07b:  lea    -0x24(%ebp),%eax
087227ce +0x07e:  mov    %eax,(%esp)
087227d1 +0x081:  call   0807e7b0 <_init+0x10a8>
087227d6 +0x086:  test   %eax,%eax
087227d8 +0x088:  jle    08722811 <+0xc1>
087227da +0x08a:  mov    (%edi),%eax
087227dc +0x08c:  mov    %eax,(%esp)
087227df +0x08f:  call   0807e6d0 <_init+0xfc8>
087227e4 +0x094:  lea    -0x84(%ebp),%edx
087227ea +0x09a:  mov    %edx,0x8(%esp)
087227ee +0x09e:  movl   $0x3,(%esp)
087227f5 +0x0a5:  mov    %eax,0x4(%esp)
087227f9 +0x0a9:  call   0807e700 <_init+0xff8>
087227fe +0x0ae:  test   %eax,%eax
08722800 +0x0b0:  jne    08722811 <+0xc1>
08722802 +0x0b2:  mov    -0x74(%ebp),%eax
08722805 +0x0b5:  and    $0xf000,%eax
0872280a +0x0ba:  cmp    $0x8000,%eax
0872280f +0x0bf:  je     08722828 <+0xd8>
08722811 +0x0c1:  xor    %ebx,%ebx
08722813 +0x0c3:  mov    -0x8(%ebp),%esi
08722816 +0x0c6:  mov    %ebx,%eax
08722818 +0x0c8:  mov    -0x4(%ebp),%edi
0872281b +0x0cb:  mov    -0xc(%ebp),%ebx
0872281e +0x0ce:  mov    %ebp,%esp
08722820 +0x0d0:  pop    %ebp
08722821 +0x0d1:  ret
08722822 +0x0d2:  lea    0x0(%esi),%esi
08722828 +0x0d8:  mov    (%edi),%eax
0872282a +0x0da:  mov    -0x58(%ebp),%ebx
0872282d +0x0dd:  mov    -0x54(%ebp),%esi
08722830 +0x0e0:  mov    %eax,(%esp)
08722833 +0x0e3:  call   0807e6d0 <_init+0xfc8>
08722838 +0x0e8:  movl   $0x1,0xc(%esp)
08722840 +0x0f0:  movl   $0x0,0x4(%esp)
08722848 +0x0f8:  movl   $0x0,0x8(%esp)
08722850 +0x100:  mov    %eax,(%esp)
08722853 +0x103:  call   0807e7a0 <_init+0x1098>
08722858 +0x108:  sub    %eax,%ebx
0872285a +0x10a:  sbb    %edx,%esi
0872285c +0x10c:  cmp    $0x0,%esi
0872285f +0x10f:  jl     08722798 <+0x48>
08722865 +0x115:  jle    08722871 <+0x121>
08722867 +0x117:  mov    $0x7fffffff,%ebx
0872286c +0x11c:  jmp    08722798 <+0x48>
08722871 +0x121:  cmp    $0x7fffffff,%ebx
08722877 +0x127:  jbe    08722798 <+0x48>
0872287d +0x12d:  jmp    08722867 <+0x117>
0872287f +0x12f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::showmanyc @ 0x8722750

/* std::__basic_file<char>::showmanyc() */

uint __thiscall std::__basic_file<char>::showmanyc(__basic_file<char> *this)

{
  int iVar1;
  uint uVar2;
  __off64_t _Var3;
  stat64 local_88;
  pollfd local_28;
  uint local_20 [4];
  
  local_20[0] = 0;
  iVar1 = fileno((FILE *)this->_M_cfile);
  iVar1 = ioctl(iVar1,0x541b,local_20);
  if ((iVar1 == 0) && (-1 < (int)local_20[0])) {
    return local_20[0];
  }
  local_28.fd = fileno((FILE *)this->_M_cfile);
  local_28.events = 1;
  iVar1 = poll(&local_28,1,0);
  if (0 < iVar1) {
    iVar1 = fileno((FILE *)this->_M_cfile);
    iVar1 = __fxstat64(3,iVar1,&local_88);
    if ((iVar1 == 0) && ((local_88.st_mode & 0xf000) == 0x8000)) {
      iVar1 = fileno((FILE *)this->_M_cfile);
      _Var3 = lseek64(iVar1,0,1);
      uVar2 = (uint)local_88.st_size - (uint)_Var3;
      iVar1 = (local_88.st_size._4_4_ - (int)((ulonglong)_Var3 >> 0x20)) -
              (uint)((uint)local_88.st_size < (uint)_Var3);
      if (iVar1 < 0) {
        return uVar2;
      }
      if ((iVar1 < 1) && (uVar2 < 0x80000000)) {
        return uVar2;
      }
      return 0x7fffffff;
    }
  }
  return 0;
}
```
