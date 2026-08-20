# Recording

`_ZN11game_master6CMacro9RecordingEiiPci`

`game_master::CMacro::Recording(int, int, char*, int)`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a8802` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8802  _ZN11game_master6CMacro9RecordingEiiPci
#           game_master::CMacro::Recording(int, int, char*, int)
# range [0x084a8802, 0x084a886f]
084a8802 +0x00:  push   %ebp
084a8803 +0x01:  mov    %esp,%ebp
084a8805 +0x03:  sub    $0x28,%esp
084a8808 +0x06:  lea    -0x14(%ebp),%eax
084a880b +0x09:  mov    %eax,(%esp)
084a880e +0x0c:  call   084b3f6a <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x1d>  ; global constructors keyed to game_master::CMacro::Reset()+0x1d
084a8813 +0x11:  mov    0xc(%ebp),%eax
084a8816 +0x14:  mov    %al,-0x14(%ebp)
084a8819 +0x17:  mov    0x10(%ebp),%eax
084a881c +0x1a:  mov    %al,-0x13(%ebp)
084a881f +0x1d:  cmpl   $0x0,0x14(%ebp)
084a8823 +0x21:  je     084a8858 <+0x56>
084a8825 +0x23:  cmpl   $0x0,0x18(%ebp)
084a8829 +0x27:  je     084a8858 <+0x56>
084a882b +0x29:  mov    0x18(%ebp),%eax
084a882e +0x2c:  mov    %eax,(%esp)
084a8831 +0x2f:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
084a8836 +0x34:  mov    %eax,-0x10(%ebp)
084a8839 +0x37:  mov    0x18(%ebp),%edx
084a883c +0x3a:  mov    -0x10(%ebp),%eax
084a883f +0x3d:  mov    %edx,0x8(%esp)
084a8843 +0x41:  mov    0x14(%ebp),%edx
084a8846 +0x44:  mov    %edx,0x4(%esp)
084a884a +0x48:  mov    %eax,(%esp)
084a884d +0x4b:  call   0807d8a0 <_init+0x198>
084a8852 +0x50:  mov    0x18(%ebp),%eax
084a8855 +0x53:  mov    %eax,-0xc(%ebp)
084a8858 +0x56:  mov    0x8(%ebp),%eax
084a885b +0x59:  lea    0x4(%eax),%edx
084a885e +0x5c:  lea    -0x14(%ebp),%eax
084a8861 +0x5f:  mov    %eax,0x4(%esp)
084a8865 +0x63:  mov    %edx,(%esp)
084a8868 +0x66:  call   084b469c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x74f>  ; global constructors keyed to game_master::CMacro::Reset()+0x74f
084a886d +0x6b:  leave
084a886e +0x6c:  ret
084a886f +0x6d:  nop
```

## 反编译 C

```c
// game_master::CMacro::Recording @ 0x84a8802

/* game_master::CMacro::Recording(int, int, char*, int) */

void __thiscall
game_master::CMacro::Recording(CMacro *this,int param_1,int param_2,char *param_3,int param_4)

{
  stMacroData local_18;
  undefined1 local_17;
  void *local_14;
  int local_10;
  
  stMacroData::stMacroData(&local_18);
  local_18 = SUB41(param_1,0);
  local_17 = (undefined1)param_2;
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    local_14 = operator_new__(param_4);
    memcpy(local_14,param_3,param_4);
    local_10 = param_4;
  }
  std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::push_back
            ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)(this + 4)
             ,&local_18);
  return;
}
```
