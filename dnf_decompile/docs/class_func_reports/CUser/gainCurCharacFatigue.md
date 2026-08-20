# gainCurCharacFatigue

`_ZN5CUser20gainCurCharacFatigueEi`

`CUser::gainCurCharacFatigue(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864f7fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864f7fe  _ZN5CUser20gainCurCharacFatigueEi
#           CUser::gainCurCharacFatigue(int)
# range [0x0864f7fe, 0x0864f8e9]
0864f7fe +0x00:  push   %ebp
0864f7ff +0x01:  mov    %esp,%ebp
0864f801 +0x03:  sub    $0x38,%esp
0864f804 +0x06:  movl   $0x0,-0x1c(%ebp)
0864f80b +0x0d:  mov    0x8(%ebp),%eax
0864f80e +0x10:  add    $0x7121c,%eax
0864f813 +0x15:  mov    %eax,(%esp)
0864f816 +0x18:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
0864f81b +0x1d:  test   %ax,%ax
0864f81e +0x20:  setne  %al
0864f821 +0x23:  test   %al,%al
0864f823 +0x25:  je     0864f836 <+0x38>
0864f825 +0x27:  mov    0x8(%ebp),%eax
0864f828 +0x2a:  mov    %eax,(%esp)
0864f82b +0x2d:  call   08696402 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c57>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c57
0864f830 +0x32:  movzwl %ax,%eax
0864f833 +0x35:  mov    %eax,-0x1c(%ebp)
0864f836 +0x38:  mov    0x8(%ebp),%eax
0864f839 +0x3b:  mov    %eax,(%esp)
0864f83c +0x3e:  call   086963b0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c05>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c05
0864f841 +0x43:  movzwl %ax,%eax
0864f844 +0x46:  mov    %eax,-0x18(%ebp)
0864f847 +0x49:  lea    -0x1c(%ebp),%eax
0864f84a +0x4c:  mov    %eax,0x4(%esp)
0864f84e +0x50:  lea    -0x18(%ebp),%eax
0864f851 +0x53:  mov    %eax,(%esp)
0864f854 +0x56:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0864f859 +0x5b:  mov    (%eax),%eax
0864f85b +0x5d:  mov    %eax,-0x14(%ebp)
0864f85e +0x60:  mov    0xc(%ebp),%eax
0864f861 +0x63:  mov    -0x14(%ebp),%edx
0864f864 +0x66:  mov    %edx,%ecx
0864f866 +0x68:  sub    %eax,%ecx
0864f868 +0x6a:  mov    %ecx,%eax
0864f86a +0x6c:  mov    %eax,-0x10(%ebp)
0864f86d +0x6f:  cmpl   $0x0,-0x10(%ebp)
0864f871 +0x73:  js     0864f890 <+0x92>
0864f873 +0x75:  mov    0xc(%ebp),%eax
0864f876 +0x78:  sub    %eax,-0x14(%ebp)
0864f879 +0x7b:  mov    -0x14(%ebp),%eax
0864f87c +0x7e:  movzwl %ax,%edx
0864f87f +0x81:  mov    0x8(%ebp),%eax
0864f882 +0x84:  mov    %edx,0x4(%esp)
0864f886 +0x88:  mov    %eax,(%esp)
0864f889 +0x8b:  call   086963d0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c25>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c25
0864f88e +0x90:  jmp    0864f8e8 <+0xea>
0864f890 +0x92:  cmpl   $0x0,-0x14(%ebp)
0864f894 +0x96:  jle    0864f8a9 <+0xab>
0864f896 +0x98:  mov    0x8(%ebp),%eax
0864f899 +0x9b:  movl   $0x0,0x4(%esp)
0864f8a1 +0xa3:  mov    %eax,(%esp)
0864f8a4 +0xa6:  call   086963d0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c25>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c25
0864f8a9 +0xab:  mov    0x8(%ebp),%eax
0864f8ac +0xae:  mov    %eax,(%esp)
0864f8af +0xb1:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0864f8b4 +0xb6:  movzwl %ax,%eax
0864f8b7 +0xb9:  mov    %eax,-0xc(%ebp)
0864f8ba +0xbc:  mov    -0x10(%ebp),%eax
0864f8bd +0xbf:  mov    -0xc(%ebp),%edx
0864f8c0 +0xc2:  lea    (%edx,%eax,1),%eax
0864f8c3 +0xc5:  test   %eax,%eax
0864f8c5 +0xc7:  jns    0864f8d0 <+0xd2>
0864f8c7 +0xc9:  movl   $0x0,-0xc(%ebp)
0864f8ce +0xd0:  jmp    0864f8d6 <+0xd8>
0864f8d0 +0xd2:  mov    -0x10(%ebp),%eax
0864f8d3 +0xd5:  add    %eax,-0xc(%ebp)
0864f8d6 +0xd8:  mov    0x8(%ebp),%eax
0864f8d9 +0xdb:  mov    -0xc(%ebp),%edx
0864f8dc +0xde:  mov    %edx,0x4(%esp)
0864f8e0 +0xe2:  mov    %eax,(%esp)
0864f8e3 +0xe5:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
0864f8e8 +0xea:  leave
0864f8e9 +0xeb:  ret
```

## 反编译 C

```c
// CUser::gainCurCharacFatigue @ 0x864f7fe

/* CUser::gainCurCharacFatigue(int) */

void __thiscall CUser::gainCurCharacFatigue(CUser *this,int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = 0;
  sVar1 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
  if (sVar1 != 0) {
    local_20 = CUserCharacInfo::getCurCharacMaxPremiumFatigue((CUserCharacInfo *)this);
    local_20 = local_20 & 0xffff;
  }
  local_1c = CUserCharacInfo::getCurCharacPremiumFatigue((CUserCharacInfo *)this);
  local_1c = local_1c & 0xffff;
  piVar2 = std::min<int>((int *)&local_1c,(int *)&local_20);
  local_18 = *piVar2;
  local_14 = local_18 - param_1;
  if (local_14 < 0) {
    if (0 < local_18) {
      CUserCharacInfo::setCurCharacPremiumFatigue((CUserCharacInfo *)this,0);
    }
    uVar3 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
    if ((int)((uVar3 & 0xffff) + local_14) < 0) {
      local_10 = 0;
    }
    else {
      local_10 = (uVar3 & 0xffff) + local_14;
    }
    CUserCharacInfo::setCurCharacFatigue((CUserCharacInfo *)this,local_10);
  }
  else {
    local_18 = local_18 - param_1;
    CUserCharacInfo::setCurCharacPremiumFatigue((CUserCharacInfo *)this,(ushort)local_18);
  }
  return;
}
```
