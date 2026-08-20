# CreateData

`_ZN5yaSSL10CreateDataEv`

`yaSSL::CreateData()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747750  _ZN5yaSSL10CreateDataEv
#           yaSSL::CreateData()
# range [0x08747750, 0x0874778e]
08747750 +0x00:  push   %ebp
08747751 +0x01:  mov    %esp,%ebp
08747753 +0x03:  sub    $0x18,%esp
08747756 +0x06:  mov    %ebx,-0x8(%ebp)
08747759 +0x09:  mov    %esi,-0x4(%ebp)
0874775c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08747761 +0x11:  add    $0xc25437,%ebx
08747767 +0x17:  movb   $0x0,0x4(%esp)
0874776c +0x1c:  movl   $0x10,(%esp)
08747773 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747778 +0x28:  mov    %eax,%esi
0874777a +0x2a:  mov    %eax,(%esp)
0874777d +0x2d:  call   08746be0 <_ZN5yaSSL4DataC1Ev>  ; yaSSL::Data::Data()
08747782 +0x32:  mov    %esi,%eax
08747784 +0x34:  mov    -0x8(%ebp),%ebx
08747787 +0x37:  mov    -0x4(%ebp),%esi
0874778a +0x3a:  mov    %ebp,%esp
0874778c +0x3c:  pop    %ebp
0874778d +0x3d:  ret
0874778e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateData @ 0x8747750

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateData() */

Data * yaSSL::CreateData(void)

{
  Data *this;
  
  this = operator_new(0x10,0);
  Data::Data(this);
  return this;
}
```
