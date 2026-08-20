# GetSelf

`_ZN5yaSSL20yassl_int_cpp_local27GetSelfEv`

`yaSSL::yassl_int_cpp_local2::GetSelf()`

| 类 | 地址 |
|---|---|
| `yaSSL::yassl_int_cpp_local2` | `0x0874f7b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f7b0  _ZN5yaSSL20yassl_int_cpp_local27GetSelfEv
#           yaSSL::yassl_int_cpp_local2::GetSelf()
# range [0x0874f7b0, 0x0874f7ce]
0874f7b0 +0x00:  push   %ebp
0874f7b1 +0x01:  mov    %esp,%ebp
0874f7b3 +0x03:  push   %ebx
0874f7b4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f7b9 +0x09:  add    $0xc1d3df,%ebx
0874f7bf +0x0f:  sub    $0x4,%esp
0874f7c2 +0x12:  call   0807e740 <_init+0x1038>
0874f7c7 +0x17:  add    $0x4,%esp
0874f7ca +0x1a:  pop    %ebx
0874f7cb +0x1b:  pop    %ebp
0874f7cc +0x1c:  ret
0874f7cd +0x1d:  nop
0874f7ce +0x1e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::yassl_int_cpp_local2::GetSelf @ 0x874f7b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::yassl_int_cpp_local2::GetSelf() */

void yaSSL::yassl_int_cpp_local2::GetSelf(void)

{
  pthread_self();
  return;
}
```
