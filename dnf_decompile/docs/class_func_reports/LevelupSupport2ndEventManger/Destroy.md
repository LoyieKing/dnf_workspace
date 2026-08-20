# Destroy

`_ZN28LevelupSupport2ndEventManger7DestroyEv`

`LevelupSupport2ndEventManger::Destroy()`

| 类 | 地址 |
|---|---|
| `LevelupSupport2ndEventManger` | `0x08147864` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08147864  _ZN28LevelupSupport2ndEventManger7DestroyEv
#           LevelupSupport2ndEventManger::Destroy()
# range [0x08147864, 0x0814787f]
08147864 +0x00:  push   %ebp
08147865 +0x01:  mov    %esp,%ebp
08147867 +0x03:  sub    $0x18,%esp
0814786a +0x06:  mov    0x8(%ebp),%eax
0814786d +0x09:  add    $0x4,%eax
08147870 +0x0c:  mov    %eax,(%esp)
08147873 +0x0f:  call   08ab5964 <_ZN23LevelupSupport2ndScript11clearScriptEv>  ; LevelupSupport2ndScript::clearScript()
08147878 +0x14:  mov    $0x1,%eax
0814787d +0x19:  leave
0814787e +0x1a:  ret
0814787f +0x1b:  nop
```

## 反编译 C

```c
// LevelupSupport2ndEventManger::Destroy @ 0x8147864

/* LevelupSupport2ndEventManger::Destroy() */

undefined4 __thiscall LevelupSupport2ndEventManger::Destroy(LevelupSupport2ndEventManger *this)

{
  LevelupSupport2ndScript::clearScript((LevelupSupport2ndScript *)(this + 4));
  return 1;
}
```
