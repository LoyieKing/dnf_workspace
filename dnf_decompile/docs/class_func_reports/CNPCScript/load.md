# load

`_ZN10CNPCScript4loadEPKc`

`CNPCScript::load(char const*)`

| 类 | 地址 |
|---|---|
| `CNPCScript` | `0x085809a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085809a6  _ZN10CNPCScript4loadEPKc
#           CNPCScript::load(char const*)
# range [0x085809a6, 0x085809e3]
085809a6 +0x00:  push   %ebp
085809a7 +0x01:  mov    %esp,%ebp
085809a9 +0x03:  sub    $0x18,%esp
085809ac +0x06:  mov    0x8(%ebp),%eax
085809af +0x09:  lea    0x4(%eax),%edx
085809b2 +0x0c:  mov    0xc(%ebp),%eax
085809b5 +0x0f:  mov    %eax,0x4(%esp)
085809b9 +0x13:  mov    %edx,(%esp)
085809bc +0x16:  call   089fc264 <_Z15importNpcScriptP9NpcScriptPKc>  ; importNpcScript(NpcScript*, char const*)
085809c1 +0x1b:  xor    $0x1,%eax
085809c4 +0x1e:  test   %al,%al
085809c6 +0x20:  je     085809cf <+0x29>
085809c8 +0x22:  mov    $0x0,%eax
085809cd +0x27:  jmp    085809e1 <+0x3b>
085809cf +0x29:  mov    0x8(%ebp),%eax
085809d2 +0x2c:  mov    0x4(%eax),%eax
085809d5 +0x2f:  mov    %eax,%edx
085809d7 +0x31:  mov    0x8(%ebp),%eax
085809da +0x34:  mov    %edx,(%eax)
085809dc +0x36:  mov    $0x1,%eax
085809e1 +0x3b:  leave
085809e2 +0x3c:  ret
085809e3 +0x3d:  nop
```

## 反编译 C

```c
// CNPCScript::load @ 0x85809a6

/* CNPCScript::load(char const*) */

bool __thiscall CNPCScript::load(CNPCScript *this,char *param_1)

{
  char cVar1;
  
  cVar1 = importNpcScript((NpcScript *)(this + 4),param_1);
  if (cVar1 == '\x01') {
    *(undefined4 *)this = *(undefined4 *)(this + 4);
  }
  return cVar1 == '\x01';
}
```
