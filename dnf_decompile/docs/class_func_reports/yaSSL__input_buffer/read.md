# read

`_ZN5yaSSL12input_buffer4readEPhj`

`yaSSL::input_buffer::read(unsigned char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08797040` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797040  _ZN5yaSSL12input_buffer4readEPhj
#           yaSSL::input_buffer::read(unsigned char*, unsigned int)
# range [0x08797040, 0x087970a9]
08797040 +0x00:  push   %ebp
08797041 +0x01:  mov    %esp,%ebp
08797043 +0x03:  sub    $0x28,%esp
08797046 +0x06:  mov    %esi,-0x8(%ebp)
08797049 +0x09:  mov    0x8(%ebp),%esi
0879704c +0x0c:  mov    %ebx,-0xc(%ebp)
0879704f +0x0f:  mov    %edi,-0x4(%ebp)
08797052 +0x12:  mov    0x10(%ebp),%edi
08797055 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879705a +0x1a:  add    $0xbd5b3e,%ebx
08797060 +0x20:  mov    (%esi),%eax
08797062 +0x22:  mov    %eax,0x8(%esp)
08797066 +0x26:  mov    0x4(%esi),%eax
08797069 +0x29:  mov    %esi,(%esp)
0879706c +0x2c:  lea    -0x1(%edi,%eax,1),%eax
08797070 +0x30:  mov    %eax,0x4(%esp)
08797074 +0x34:  call   08796ce0 <_ZN5yaSSL5Check5checkEjj>  ; yaSSL::Check::check(unsigned int, unsigned int)
08797079 +0x39:  mov    0x8(%esi),%eax
0879707c +0x3c:  add    0x4(%esi),%eax
0879707f +0x3f:  mov    %edi,0x8(%esp)
08797083 +0x43:  mov    %eax,0x4(%esp)
08797087 +0x47:  mov    0xc(%ebp),%eax
0879708a +0x4a:  mov    %eax,(%esp)
0879708d +0x4d:  call   0807d8a0 <_init+0x198>
08797092 +0x52:  add    %edi,0x4(%esi)
08797095 +0x55:  mov    -0xc(%ebp),%ebx
08797098 +0x58:  mov    -0x8(%ebp),%esi
0879709b +0x5b:  mov    -0x4(%ebp),%edi
0879709e +0x5e:  mov    %ebp,%esp
087970a0 +0x60:  pop    %ebp
087970a1 +0x61:  ret
087970a2 +0x62:  lea    0x0(%esi,%eiz,1),%esi
087970a9 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::input_buffer::read @ 0x8797040

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::read(unsigned char*, unsigned int) */

void __thiscall yaSSL::input_buffer::read(input_buffer *this,uchar *param_1,uint param_2)

{
  Check::check((uint)this,(param_2 - 1) + *(int *)(this + 4));
  memcpy(param_1,(void *)(*(int *)(this + 8) + *(int *)(this + 4)),param_2);
  *(uint *)(this + 4) = *(int *)(this + 4) + param_2;
  return;
}
```
