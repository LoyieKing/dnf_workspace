# SetRankRecord

`_ZN13Inter_LoadEtc13SetRankRecordEP5CUserP12SIG_LOAD_ETC`

`Inter_LoadEtc::SetRankRecord(CUser*, SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084c2a98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c2a98  _ZN13Inter_LoadEtc13SetRankRecordEP5CUserP12SIG_LOAD_ETC
#           Inter_LoadEtc::SetRankRecord(CUser*, SIG_LOAD_ETC*)
# range [0x084c2a98, 0x084c2b07]
084c2a98 +0x00:  push   %ebp
084c2a99 +0x01:  mov    %esp,%ebp
084c2a9b +0x03:  sub    $0x28,%esp
084c2a9e +0x06:  movl   $0x0,-0xc(%ebp)
084c2aa5 +0x0d:  jmp    084c2aed <+0x55>
084c2aa7 +0x0f:  mov    -0xc(%ebp),%edx
084c2aaa +0x12:  mov    0x10(%ebp),%ecx
084c2aad +0x15:  mov    %edx,%eax
084c2aaf +0x17:  shl    $0x2,%eax
084c2ab2 +0x1a:  add    %edx,%eax
084c2ab4 +0x1c:  shl    $0x4,%eax
084c2ab7 +0x1f:  lea    (%ecx,%eax,1),%eax
084c2aba +0x22:  add    $0x3c8,%eax
084c2abf +0x27:  movb   $0x1,(%eax)
084c2ac2 +0x2a:  mov    -0xc(%ebp),%edx
084c2ac5 +0x2d:  mov    %edx,%eax
084c2ac7 +0x2f:  shl    $0x2,%eax
084c2aca +0x32:  add    %edx,%eax
084c2acc +0x34:  shl    $0x4,%eax
084c2acf +0x37:  add    $0x3c0,%eax
084c2ad4 +0x3c:  add    0x10(%ebp),%eax
084c2ad7 +0x3f:  add    $0x8,%eax
084c2ada +0x42:  mov    %eax,0x4(%esp)
084c2ade +0x46:  mov    0xc(%ebp),%eax
084c2ae1 +0x49:  mov    %eax,(%esp)
084c2ae4 +0x4c:  call   08676876 <_ZN5CUser13update_recordER14GameResultType>  ; CUser::update_record(GameResultType&)
084c2ae9 +0x51:  addl   $0x1,-0xc(%ebp)
084c2aed +0x55:  mov    0x10(%ebp),%eax
084c2af0 +0x58:  mov    0x3c4(%eax),%eax
084c2af6 +0x5e:  cmp    -0xc(%ebp),%eax
084c2af9 +0x61:  setg   %al
084c2afc +0x64:  test   %al,%al
084c2afe +0x66:  jne    084c2aa7 <+0xf>
084c2b00 +0x68:  mov    $0x1,%eax
084c2b05 +0x6d:  leave
084c2b06 +0x6e:  ret
084c2b07 +0x6f:  nop
```

## 反编译 C

```c
// Inter_LoadEtc::SetRankRecord @ 0x84c2a98

/* Inter_LoadEtc::SetRankRecord(CUser*, SIG_LOAD_ETC*) */

undefined4 __thiscall
Inter_LoadEtc::SetRankRecord(Inter_LoadEtc *this,CUser *param_1,SIG_LOAD_ETC *param_2)

{
  int local_10;
  
  for (local_10 = 0; local_10 < *(int *)(param_2 + 0x3c4); local_10 = local_10 + 1) {
    param_2[local_10 * 0x50 + 0x3c8] = (SIG_LOAD_ETC)0x1;
    CUser::update_record(param_1,(GameResultType *)(param_2 + local_10 * 0x50 + 0x3c8));
  }
  return 1;
}
```
