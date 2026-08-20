# _addHackInfo

`_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi`

`WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f7fd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7fd2  _ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi
#           WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
# range [0x080f7fd2, 0x080f8031]
080f7fd2 +0x00:  push   %ebp
080f7fd3 +0x01:  mov    %esp,%ebp
080f7fd5 +0x03:  sub    $0x28,%esp
080f7fd8 +0x06:  mov    0x8(%ebp),%eax
080f7fdb +0x09:  mov    (%eax),%eax
080f7fdd +0x0b:  mov    %eax,(%esp)
080f7fe0 +0x0e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080f7fe5 +0x13:  mov    %eax,-0x18(%ebp)
080f7fe8 +0x16:  mov    0x8(%ebp),%eax
080f7feb +0x19:  mov    (%eax),%eax
080f7fed +0x1b:  mov    %eax,(%esp)
080f7ff0 +0x1e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080f7ff5 +0x23:  mov    %eax,-0x14(%ebp)
080f7ff8 +0x26:  mov    0x10(%ebp),%eax
080f7ffb +0x29:  mov    %ax,-0x10(%ebp)
080f7fff +0x2d:  mov    0x14(%ebp),%eax
080f8002 +0x30:  mov    %eax,-0xc(%ebp)
080f8005 +0x33:  mov    0x8(%ebp),%eax
080f8008 +0x36:  lea    0x8(%eax),%edx
080f800b +0x39:  lea    -0x18(%ebp),%eax
080f800e +0x3c:  mov    %eax,0x4(%esp)
080f8012 +0x40:  mov    %edx,(%esp)
080f8015 +0x43:  call   080f9bc8 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x3d4>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x3d4
080f801a +0x48:  mov    0x8(%ebp),%eax
080f801d +0x4b:  movzbl 0x4(%eax),%eax
080f8021 +0x4f:  mov    %eax,%edx
080f8023 +0x51:  mov    0xc(%ebp),%eax
080f8026 +0x54:  or     %edx,%eax
080f8028 +0x56:  mov    %eax,%edx
080f802a +0x58:  mov    0x8(%ebp),%eax
080f802d +0x5b:  mov    %dl,0x4(%eax)
080f8030 +0x5e:  leave
080f8031 +0x5f:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::_addHackInfo @ 0x80f7fd2

/* WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int) */

void __thiscall
WongWork::CHackAnalyzer::_addHackInfo
          (CHackAnalyzer *this,byte param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined4 local_10;
  
  local_1c = CUser::get_acc_id(*(CUser **)this);
  local_18 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
  local_14 = param_3;
  local_10 = param_4;
  std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::push_back
            ((vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>> *)(this + 8),
             (stHackInfo_t *)&local_1c);
  this[4] = (CHackAnalyzer)(param_2 | (byte)this[4]);
  return;
}
```
