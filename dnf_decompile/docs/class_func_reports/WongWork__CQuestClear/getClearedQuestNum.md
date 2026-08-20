# getClearedQuestNum

`_ZNK8WongWork11CQuestClear18getClearedQuestNumEv`

`WongWork::CQuestClear::getClearedQuestNum() const`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808bbc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bbc4  _ZNK8WongWork11CQuestClear18getClearedQuestNumEv
#           WongWork::CQuestClear::getClearedQuestNum() const
# range [0x0808bbc4, 0x0808bc02]
0808bbc4 +0x00:  push   %ebp
0808bbc5 +0x01:  mov    %esp,%ebp
0808bbc7 +0x03:  sub    $0x10,%esp
0808bbca +0x06:  movl   $0x0,-0x8(%ebp)
0808bbd1 +0x0d:  movl   $0x1,-0x4(%ebp)
0808bbd8 +0x14:  jmp    0808bbf0 <+0x2c>
0808bbda +0x16:  mov    -0x4(%ebp),%eax
0808bbdd +0x19:  mov    0x8(%ebp),%edx
0808bbe0 +0x1c:  movzbl (%edx,%eax,1),%eax
0808bbe4 +0x20:  test   %al,%al
0808bbe6 +0x22:  je     0808bbec <+0x28>
0808bbe8 +0x24:  addl   $0x1,-0x8(%ebp)
0808bbec +0x28:  addl   $0x1,-0x4(%ebp)
0808bbf0 +0x2c:  cmpl   $0x752f,-0x4(%ebp)
0808bbf7 +0x33:  setle  %al
0808bbfa +0x36:  test   %al,%al
0808bbfc +0x38:  jne    0808bbda <+0x16>
0808bbfe +0x3a:  mov    -0x8(%ebp),%eax
0808bc01 +0x3d:  leave
0808bc02 +0x3e:  ret
```

## 反编译 C

```c
// WongWork::CQuestClear::getClearedQuestNum @ 0x808bbc4

/* WongWork::CQuestClear::getClearedQuestNum() const */

int __thiscall WongWork::CQuestClear::getClearedQuestNum(CQuestClear *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 1; local_8 < 30000; local_8 = local_8 + 1) {
    if (this[local_8] != (CQuestClear)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
