# CreateFinished

`_ZN5yaSSL14CreateFinishedEv`

`yaSSL::CreateFinished()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747590  _ZN5yaSSL14CreateFinishedEv
#           yaSSL::CreateFinished()
# range [0x08747590, 0x087475ce]
08747590 +0x00:  push   %ebp
08747591 +0x01:  mov    %esp,%ebp
08747593 +0x03:  sub    $0x18,%esp
08747596 +0x06:  mov    %ebx,-0x8(%ebp)
08747599 +0x09:  mov    %esi,-0x4(%ebp)
0874759c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087475a1 +0x11:  add    $0xc255f7,%ebx
087475a7 +0x17:  movb   $0x0,0x4(%esp)
087475ac +0x1c:  movl   $0x2c,(%esp)
087475b3 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087475b8 +0x28:  mov    %eax,%esi
087475ba +0x2a:  mov    %eax,(%esp)
087475bd +0x2d:  call   087471a0 <_ZN5yaSSL8FinishedC1Ev>  ; yaSSL::Finished::Finished()
087475c2 +0x32:  mov    %esi,%eax
087475c4 +0x34:  mov    -0x8(%ebp),%ebx
087475c7 +0x37:  mov    -0x4(%ebp),%esi
087475ca +0x3a:  mov    %ebp,%esp
087475cc +0x3c:  pop    %ebp
087475cd +0x3d:  ret
087475ce +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateFinished @ 0x8747590

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateFinished() */

Finished * yaSSL::CreateFinished(void)

{
  Finished *this;
  
  this = operator_new(0x2c,0);
  Finished::Finished(this);
  return this;
}
```
