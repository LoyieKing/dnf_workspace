# ServerHelloDone

`_ZN5yaSSL15ServerHelloDoneC1Ev`

`yaSSL::ServerHelloDone::ServerHelloDone()`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHelloDone` | `0x08746e90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746e90  _ZN5yaSSL15ServerHelloDoneC1Ev
#           yaSSL::ServerHelloDone::ServerHelloDone()
# range [0x08746e90, 0x08746ec9]
08746e90 +0x00:  push   %ebp
08746e91 +0x01:  mov    %esp,%ebp
08746e93 +0x03:  push   %ebx
08746e94 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08746e99 +0x09:  add    $0xc25cff,%ebx
08746e9f +0x0f:  sub    $0x14,%esp
08746ea2 +0x12:  mov    0x8(%ebp),%eax
08746ea5 +0x15:  mov    -0x2c(%ebx),%edx
08746eab +0x1b:  add    $0x8,%edx
08746eae +0x1e:  mov    %edx,(%eax)
08746eb0 +0x20:  movl   $0x0,0x4(%esp)
08746eb8 +0x28:  mov    %eax,(%esp)
08746ebb +0x2b:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
08746ec0 +0x30:  add    $0x14,%esp
08746ec3 +0x33:  pop    %ebx
08746ec4 +0x34:  pop    %ebp
08746ec5 +0x35:  ret
08746ec6 +0x36:  lea    0x0(%esi),%esi
08746ec9 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ServerHelloDone::ServerHelloDone @ 0x8746e90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHelloDone::ServerHelloDone() */

void __thiscall yaSSL::ServerHelloDone::ServerHelloDone(ServerHelloDone *this)

{
  *(undefined **)this = PTR_vtable_0936cb6c + 8;
  HandShakeBase::set_length((HandShakeBase *)this,0);
  return;
}
```
