# SendActionListState

`_ZN8APSystem9CUserProc19SendActionListStateEP5CUser`

`APSystem::CUserProc::SendActionListState(CUser*)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x08122398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08122398  _ZN8APSystem9CUserProc19SendActionListStateEP5CUser
#           APSystem::CUserProc::SendActionListState(CUser*)
# range [0x08122398, 0x081223b3]
08122398 +0x00:  push   %ebp
08122399 +0x01:  mov    %esp,%ebp
0812239b +0x03:  sub    $0x18,%esp
0812239e +0x06:  cmpl   $0x0,0x8(%ebp)
081223a2 +0x0a:  je     081223b1 <+0x19>
081223a4 +0x0c:  mov    0x8(%ebp),%eax
081223a7 +0x0f:  mov    %eax,(%esp)
081223aa +0x12:  call   081224a0 <_ZN8APSystem9CUserProc19SendActionListStateER5CUser>  ; APSystem::CUserProc::SendActionListState(CUser&)
081223af +0x17:  jmp    081223b2 <+0x1a>
081223b1 +0x19:  nop
081223b2 +0x1a:  leave
081223b3 +0x1b:  ret
```

## 反编译 C

```c
// APSystem::CUserProc::SendActionListState @ 0x8122398

/* APSystem::CUserProc::SendActionListState(CUser*) */

void APSystem::CUserProc::SendActionListState(CUser *param_1)

{
  if (param_1 != (CUser *)0x0) {
    SendActionListState(param_1);
  }
  return;
}
```
