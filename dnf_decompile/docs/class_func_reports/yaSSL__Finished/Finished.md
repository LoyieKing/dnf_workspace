# Finished

`_ZN5yaSSL8FinishedC1Ev`

`yaSSL::Finished::Finished()`

| 类 | 地址 |
|---|---|
| `yaSSL::Finished` | `0x087471a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087471a0  _ZN5yaSSL8FinishedC1Ev
#           yaSSL::Finished::Finished()
# range [0x087471a0, 0x087471d9]
087471a0 +0x00:  push   %ebp
087471a1 +0x01:  mov    %esp,%ebp
087471a3 +0x03:  push   %ebx
087471a4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087471a9 +0x09:  add    $0xc259ef,%ebx
087471af +0x0f:  sub    $0x14,%esp
087471b2 +0x12:  mov    0x8(%ebp),%eax
087471b5 +0x15:  mov    -0x1b4(%ebx),%edx
087471bb +0x1b:  add    $0x8,%edx
087471be +0x1e:  mov    %edx,(%eax)
087471c0 +0x20:  movl   $0x24,0x4(%esp)
087471c8 +0x28:  mov    %eax,(%esp)
087471cb +0x2b:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
087471d0 +0x30:  add    $0x14,%esp
087471d3 +0x33:  pop    %ebx
087471d4 +0x34:  pop    %ebp
087471d5 +0x35:  ret
087471d6 +0x36:  lea    0x0(%esi),%esi
087471d9 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Finished::Finished @ 0x87471a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Finished::Finished() */

void __thiscall yaSSL::Finished::Finished(Finished *this)

{
  *(undefined **)this = PTR_vtable_0936c9e4 + 8;
  HandShakeBase::set_length((HandShakeBase *)this,0x24);
  return;
}
```
