# setIssue

`_ZN19CMissionList_Charac8setIssueEbb`

`CMissionList_Charac::setIssue(bool, bool)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e51ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e51ce  _ZN19CMissionList_Charac8setIssueEbb
#           CMissionList_Charac::setIssue(bool, bool)
# range [0x085e51ce, 0x085e52a7]
085e51ce +0x00:  push   %ebp
085e51cf +0x01:  mov    %esp,%ebp
085e51d1 +0x03:  sub    $0x8,%esp
085e51d4 +0x06:  mov    0xc(%ebp),%edx
085e51d7 +0x09:  mov    0x10(%ebp),%eax
085e51da +0x0c:  mov    %dl,-0x4(%ebp)
085e51dd +0x0f:  mov    %al,-0x8(%ebp)
085e51e0 +0x12:  cmpb   $0x0,-0x8(%ebp)
085e51e4 +0x16:  je     085e5227 <+0x59>
085e51e6 +0x18:  mov    0x8(%ebp),%eax
085e51e9 +0x1b:  movzwl 0x148(%eax),%eax
085e51f0 +0x22:  lea    (%eax,%eax,1),%edx
085e51f3 +0x25:  mov    0x8(%ebp),%eax
085e51f6 +0x28:  mov    %dx,0x148(%eax)
085e51fd +0x2f:  mov    0x8(%ebp),%eax
085e5200 +0x32:  movzwl 0x148(%eax),%edx
085e5207 +0x39:  cmpb   $0x0,-0x4(%ebp)
085e520b +0x3d:  je     085e5214 <+0x46>
085e520d +0x3f:  mov    $0x1,%eax
085e5212 +0x44:  jmp    085e5219 <+0x4b>
085e5214 +0x46:  mov    $0x0,%eax
085e5219 +0x4b:  add    %eax,%edx
085e521b +0x4d:  mov    0x8(%ebp),%eax
085e521e +0x50:  mov    %dx,0x148(%eax)
085e5225 +0x57:  jmp    085e5266 <+0x98>
085e5227 +0x59:  mov    0x8(%ebp),%eax
085e522a +0x5c:  movzwl 0x14a(%eax),%eax
085e5231 +0x63:  lea    (%eax,%eax,1),%edx
085e5234 +0x66:  mov    0x8(%ebp),%eax
085e5237 +0x69:  mov    %dx,0x14a(%eax)
085e523e +0x70:  mov    0x8(%ebp),%eax
085e5241 +0x73:  movzwl 0x14a(%eax),%edx
085e5248 +0x7a:  cmpb   $0x0,-0x4(%ebp)
085e524c +0x7e:  je     085e5255 <+0x87>
085e524e +0x80:  mov    $0x1,%eax
085e5253 +0x85:  jmp    085e525a <+0x8c>
085e5255 +0x87:  mov    $0x0,%eax
085e525a +0x8c:  add    %eax,%edx
085e525c +0x8e:  mov    0x8(%ebp),%eax
085e525f +0x91:  mov    %dx,0x14a(%eax)
085e5266 +0x98:  mov    0x8(%ebp),%eax
085e5269 +0x9b:  movzwl 0x14c(%eax),%eax
085e5270 +0xa2:  lea    (%eax,%eax,1),%edx
085e5273 +0xa5:  mov    0x8(%ebp),%eax
085e5276 +0xa8:  mov    %dx,0x14c(%eax)
085e527d +0xaf:  mov    0x8(%ebp),%eax
085e5280 +0xb2:  movzwl 0x14c(%eax),%edx
085e5287 +0xb9:  cmpb   $0x0,-0x4(%ebp)
085e528b +0xbd:  je     085e5294 <+0xc6>
085e528d +0xbf:  mov    $0x1,%eax
085e5292 +0xc4:  jmp    085e5299 <+0xcb>
085e5294 +0xc6:  mov    $0x0,%eax
085e5299 +0xcb:  add    %eax,%edx
085e529b +0xcd:  mov    0x8(%ebp),%eax
085e529e +0xd0:  mov    %dx,0x14c(%eax)
085e52a5 +0xd7:  leave
085e52a6 +0xd8:  ret
085e52a7 +0xd9:  nop
```

## 反编译 C

```c
// CMissionList_Charac::setIssue @ 0x85e51ce

/* CMissionList_Charac::setIssue(bool, bool) */

void __thiscall CMissionList_Charac::setIssue(CMissionList_Charac *this,bool param_1,bool param_2)

{
  if (param_2) {
    *(short *)(this + 0x148) = *(short *)(this + 0x148) * 2;
    *(ushort *)(this + 0x148) = *(short *)(this + 0x148) + (ushort)param_1;
  }
  else {
    *(short *)(this + 0x14a) = *(short *)(this + 0x14a) * 2;
    *(ushort *)(this + 0x14a) = *(short *)(this + 0x14a) + (ushort)param_1;
  }
  *(short *)(this + 0x14c) = *(short *)(this + 0x14c) * 2;
  *(ushort *)(this + 0x14c) = *(short *)(this + 0x14c) + (ushort)param_1;
  return;
}
```
