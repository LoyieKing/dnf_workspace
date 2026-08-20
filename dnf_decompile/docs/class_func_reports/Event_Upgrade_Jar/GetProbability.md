# GetProbability

`_ZNK17Event_Upgrade_Jar14GetProbabilityEiRj`

`Event_Upgrade_Jar::GetProbability(int, unsigned int&) const`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4ee2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4ee2  _ZNK17Event_Upgrade_Jar14GetProbabilityEiRj
#           Event_Upgrade_Jar::GetProbability(int, unsigned int&) const
# range [0x080f4ee2, 0x080f4f61]
080f4ee2 +0x00:  push   %ebp
080f4ee3 +0x01:  mov    %esp,%ebp
080f4ee5 +0x03:  sub    $0x18,%esp
080f4ee8 +0x06:  mov    0x8(%ebp),%eax
080f4eeb +0x09:  mov    0x84(%eax),%eax
080f4ef1 +0x0f:  test   %eax,%eax
080f4ef3 +0x11:  je     080f4f5e <+0x7c>
080f4ef5 +0x13:  mov    0x8(%ebp),%eax
080f4ef8 +0x16:  mov    0x84(%eax),%eax
080f4efe +0x1c:  cmp    $0x1,%eax
080f4f01 +0x1f:  jne    080f4f2d <+0x4b>
080f4f03 +0x21:  mov    0x8(%ebp),%eax
080f4f06 +0x24:  movzbl 0x88(%eax),%eax
080f4f0d +0x2b:  movzbl %al,%eax
080f4f10 +0x2e:  mov    %eax,0x8(%esp)
080f4f14 +0x32:  mov    0xc(%ebp),%eax
080f4f17 +0x35:  mov    %eax,0x4(%esp)
080f4f1b +0x39:  mov    0x8(%ebp),%eax
080f4f1e +0x3c:  mov    %eax,(%esp)
080f4f21 +0x3f:  call   080f4be0 <_ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij>  ; Event_Upgrade_Jar::_getFailProb_Fortune(int, unsigned int) const
080f4f26 +0x44:  mov    0x10(%ebp),%edx
080f4f29 +0x47:  mov    %eax,(%edx)
080f4f2b +0x49:  jmp    080f4f5f <+0x7d>
080f4f2d +0x4b:  mov    0x8(%ebp),%eax
080f4f30 +0x4e:  mov    0x84(%eax),%eax
080f4f36 +0x54:  cmp    $0x2,%eax
080f4f39 +0x57:  jne    080f4f5f <+0x7d>
080f4f3b +0x59:  mov    0x8(%ebp),%eax
080f4f3e +0x5c:  movzbl 0x88(%eax),%eax
080f4f45 +0x63:  movzbl %al,%eax
080f4f48 +0x66:  mov    %eax,0x4(%esp)
080f4f4c +0x6a:  mov    0x8(%ebp),%eax
080f4f4f +0x6d:  mov    %eax,(%esp)
080f4f52 +0x70:  call   080f4c8e <_ZNK17Event_Upgrade_Jar19_getFailProb_NewNPCEj>  ; Event_Upgrade_Jar::_getFailProb_NewNPC(unsigned int) const
080f4f57 +0x75:  mov    0x10(%ebp),%edx
080f4f5a +0x78:  mov    %eax,(%edx)
080f4f5c +0x7a:  jmp    080f4f5f <+0x7d>
080f4f5e +0x7c:  nop
080f4f5f +0x7d:  leave
080f4f60 +0x7e:  ret
080f4f61 +0x7f:  nop
```

## 反编译 C

```c
// Event_Upgrade_Jar::GetProbability @ 0x80f4ee2

/* Event_Upgrade_Jar::GetProbability(int, unsigned int&) const */

void __thiscall Event_Upgrade_Jar::GetProbability(Event_Upgrade_Jar *this,int param_1,uint *param_2)

{
  uint uVar1;
  
  if (*(int *)(this + 0x84) != 0) {
    if (*(int *)(this + 0x84) == 1) {
      uVar1 = _getFailProb_Fortune(this,param_1,(uint)(byte)this[0x88]);
      *param_2 = uVar1;
    }
    else if (*(int *)(this + 0x84) == 2) {
      uVar1 = _getFailProb_NewNPC(this,(uint)(byte)this[0x88]);
      *param_2 = uVar1;
    }
  }
  return;
}
```
