# ~AES

`_ZN5yaSSL3AESD1Ev`

`yaSSL::AES::~AES()`

| 类 | 地址 |
|---|---|
| `yaSSL::AES` | `0x08798840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798840  _ZN5yaSSL3AESD1Ev
#           yaSSL::AES::~AES()
# range [0x08798840, 0x0879889f]
08798840 +0x00:  push   %ebp
08798841 +0x01:  mov    %esp,%ebp
08798843 +0x03:  sub    $0x18,%esp
08798846 +0x06:  mov    %ebx,-0x8(%ebp)
08798849 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0879884e +0x0e:  add    $0xbd434a,%ebx
08798854 +0x14:  mov    %esi,-0x4(%ebp)
08798857 +0x17:  mov    0x8(%ebp),%esi
0879885a +0x1a:  mov    -0x598(%ebx),%eax
08798860 +0x20:  add    $0x8,%eax
08798863 +0x23:  mov    %eax,(%esi)
08798865 +0x25:  mov    0x4(%esi),%eax
08798868 +0x28:  test   %eax,%eax
0879886a +0x2a:  je     0879887d <+0x3d>
0879886c +0x2c:  mov    -0x474(%ebx),%edx
08798872 +0x32:  add    $0x8,%edx
08798875 +0x35:  mov    %edx,0x12c(%eax)
0879887b +0x3b:  mov    %edx,(%eax)
0879887d +0x3d:  mov    %eax,(%esp)
08798880 +0x40:  movb   $0x0,0x4(%esp)
08798885 +0x45:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879888a +0x4a:  mov    -0x520(%ebx),%eax
08798890 +0x50:  add    $0x8,%eax
08798893 +0x53:  mov    %eax,(%esi)
08798895 +0x55:  mov    -0x8(%ebp),%ebx
08798898 +0x58:  mov    -0x4(%ebp),%esi
0879889b +0x5b:  mov    %ebp,%esp
0879889d +0x5d:  pop    %ebp
0879889e +0x5e:  ret
0879889f +0x5f:  nop
```

## 反编译 C

```c
// yaSSL::AES::~AES @ 0x8798840

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::~AES() */

void __thiscall yaSSL::AES::~AES(AES *this)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c600 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = PTR_vtable_0936c724 + 8;
    puVar1[0x4b] = puVar2;
    *puVar1 = puVar2;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c678 + 8;
  return;
}
```
