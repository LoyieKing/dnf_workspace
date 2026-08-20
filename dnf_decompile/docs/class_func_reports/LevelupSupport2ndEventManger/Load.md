# Load

`_ZN28LevelupSupport2ndEventManger4LoadEv`

`LevelupSupport2ndEventManger::Load()`

| 类 | 地址 |
|---|---|
| `LevelupSupport2ndEventManger` | `0x081477e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081477e4  _ZN28LevelupSupport2ndEventManger4LoadEv
#           LevelupSupport2ndEventManger::Load()
# range [0x081477e4, 0x08147863]
081477e4 +0x00:  push   %ebp
081477e5 +0x01:  mov    %esp,%ebp
081477e7 +0x03:  sub    $0x38,%esp
081477ea +0x06:  movl   $0x0,0x14(%esp)
081477f2 +0x0e:  movl   $0x1,0x10(%esp)
081477fa +0x16:  movl   $0x9,0xc(%esp)
08147802 +0x1e:  movl   $0xb7,0x8(%esp)
0814780a +0x26:  movl   $&_ZZN28LevelupSupport2ndEventManger4LoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
08147812 +0x2e:  lea    -0x18(%ebp),%eax
08147815 +0x31:  mov    %eax,(%esp)
08147818 +0x34:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0814781d +0x39:  movl   $"\t- Loading Level Up Support 2nd Event script - ",0x4(%esp)
08147825 +0x41:  lea    -0x18(%ebp),%eax
08147828 +0x44:  mov    %eax,(%esp)
0814782b +0x47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08147830 +0x4c:  mov    0x8(%ebp),%eax
08147833 +0x4f:  add    $0x8,%eax
08147836 +0x52:  mov    %eax,(%esp)
08147839 +0x55:  call   08147e4a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x33d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x33d
0814783e +0x5a:  mov    0x8(%ebp),%eax
08147841 +0x5d:  add    $0x4,%eax
08147844 +0x60:  mov    %eax,(%esp)
08147847 +0x63:  call   08ab55a4 <_ZN23LevelupSupport2ndScript10loadScriptEv>  ; LevelupSupport2ndScript::loadScript()
0814784c +0x68:  test   %eax,%eax
0814784e +0x6a:  setne  %al
08147851 +0x6d:  test   %al,%al
08147853 +0x6f:  je     0814785c <+0x78>
08147855 +0x71:  mov    $0x0,%eax
0814785a +0x76:  jmp    08147861 <+0x7d>
0814785c +0x78:  mov    $0x1,%eax
08147861 +0x7d:  leave
08147862 +0x7e:  ret
08147863 +0x7f:  nop
```

## 反编译 C

```c
// LevelupSupport2ndEventManger::Load @ 0x81477e4

/* LevelupSupport2ndEventManger::Load() */

bool __thiscall LevelupSupport2ndEventManger::Load(LevelupSupport2ndEventManger *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool LevelupSupport2ndEventManger::Load()",0xb7,9,true,false)
  ;
  cMyTrace::operator()(local_1c,"\t- Loading Level Up Support 2nd Event script - ");
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::clear((map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
           *)(this + 8));
  iVar1 = LevelupSupport2ndScript::loadScript((LevelupSupport2ndScript *)(this + 4));
  return iVar1 == 0;
}
```
