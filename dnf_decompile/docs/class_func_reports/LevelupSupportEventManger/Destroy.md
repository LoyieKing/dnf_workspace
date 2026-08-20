# Destroy

`_ZN25LevelupSupportEventManger7DestroyEv`

`LevelupSupportEventManger::Destroy()`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x08146fda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146fda  _ZN25LevelupSupportEventManger7DestroyEv
#           LevelupSupportEventManger::Destroy()
# range [0x08146fda, 0x08147011]
08146fda +0x00:  push   %ebp
08146fdb +0x01:  mov    %esp,%ebp
08146fdd +0x03:  sub    $0x18,%esp
08146fe0 +0x06:  mov    0x8(%ebp),%eax
08146fe3 +0x09:  add    $0x4,%eax
08146fe6 +0x0c:  mov    %eax,(%esp)
08146fe9 +0x0f:  call   08ab5442 <_ZN20LevelupSupportSciprt11clearScriptEv>  ; LevelupSupportSciprt::clearScript()
08146fee +0x14:  mov    0x8(%ebp),%eax
08146ff1 +0x17:  add    $0x1c,%eax
08146ff4 +0x1a:  mov    %eax,(%esp)
08146ff7 +0x1d:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
08146ffc +0x22:  mov    0x8(%ebp),%eax
08146fff +0x25:  add    $0x34,%eax
08147002 +0x28:  mov    %eax,(%esp)
08147005 +0x2b:  call   08147be2 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0xd5>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0xd5
0814700a +0x30:  mov    $0x1,%eax
0814700f +0x35:  leave
08147010 +0x36:  ret
08147011 +0x37:  nop
```

## 反编译 C

```c
// LevelupSupportEventManger::Destroy @ 0x8146fda

/* LevelupSupportEventManger::Destroy() */

undefined4 __thiscall LevelupSupportEventManger::Destroy(LevelupSupportEventManger *this)

{
  LevelupSupportSciprt::clearScript((LevelupSupportSciprt *)(this + 4));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::clear((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
           *)(this + 0x34));
  return 1;
}
```
