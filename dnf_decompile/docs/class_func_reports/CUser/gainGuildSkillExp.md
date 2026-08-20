# gainGuildSkillExp

`_ZN5CUser17gainGuildSkillExpEi`

`CUser::gainGuildSkillExp(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864fb3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864fb3a  _ZN5CUser17gainGuildSkillExpEi
#           CUser::gainGuildSkillExp(int)
# range [0x0864fb3a, 0x0864fc33]
0864fb3a +0x00:  push   %ebp
0864fb3b +0x01:  mov    %esp,%ebp
0864fb3d +0x03:  push   %ebx
0864fb3e +0x04:  sub    $0x24,%esp
0864fb41 +0x07:  mov    0x8(%ebp),%eax
0864fb44 +0x0a:  mov    %eax,(%esp)
0864fb47 +0x0d:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0864fb4c +0x12:  test   %eax,%eax
0864fb4e +0x14:  sete   %al
0864fb51 +0x17:  test   %al,%al
0864fb53 +0x19:  je     0864fb5f <+0x25>
0864fb55 +0x1b:  mov    $0x0,%eax
0864fb5a +0x20:  jmp    0864fc2e <+0xf4>
0864fb5f +0x25:  mov    0x8(%ebp),%eax
0864fb62 +0x28:  mov    %eax,(%esp)
0864fb65 +0x2b:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0864fb6a +0x30:  test   %al,%al
0864fb6c +0x32:  sete   %al
0864fb6f +0x35:  test   %al,%al
0864fb71 +0x37:  je     0864fb7d <+0x43>
0864fb73 +0x39:  mov    $0x0,%eax
0864fb78 +0x3e:  jmp    0864fc2e <+0xf4>
0864fb7d +0x43:  movb   $0x0,-0x11(%ebp)
0864fb81 +0x47:  movl   $0xc9,0x4(%esp)
0864fb89 +0x4f:  mov    0x8(%ebp),%eax
0864fb8c +0x52:  mov    %eax,(%esp)
0864fb8f +0x55:  call   0864fac4 <_ZN5CUser17IsGuildSkillLearnEi>  ; CUser::IsGuildSkillLearn(int)
0864fb94 +0x5a:  mov    %al,-0x11(%ebp)
0864fb97 +0x5d:  cmpb   $0x0,-0x11(%ebp)
0864fb9b +0x61:  sete   %al
0864fb9e +0x64:  test   %al,%al
0864fba0 +0x66:  je     0864fbac <+0x72>
0864fba2 +0x68:  mov    $0x0,%eax
0864fba7 +0x6d:  jmp    0864fc2e <+0xf4>
0864fbac +0x72:  movl   $0x0,-0x10(%ebp)
0864fbb3 +0x79:  mov    0x8(%ebp),%eax
0864fbb6 +0x7c:  mov    %eax,(%esp)
0864fbb9 +0x7f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0864fbbe +0x84:  mov    %eax,%ebx
0864fbc0 +0x86:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864fbc5 +0x8b:  movl   $0xc9,0x8(%esp)
0864fbcd +0x93:  mov    %ebx,0x4(%esp)
0864fbd1 +0x97:  mov    %eax,(%esp)
0864fbd4 +0x9a:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
0864fbd9 +0x9f:  mov    %eax,-0x10(%ebp)
0864fbdc +0xa2:  movsbl -0x11(%ebp),%eax
0864fbe0 +0xa6:  sub    $0x1,%eax
0864fbe3 +0xa9:  mov    %eax,%ebx
0864fbe5 +0xab:  mov    -0x10(%ebp),%eax
0864fbe8 +0xae:  add    $0x108,%eax
0864fbed +0xb3:  movl   $0x0,0x4(%esp)
0864fbf5 +0xbb:  mov    %eax,(%esp)
0864fbf8 +0xbe:  call   0869922c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5a81>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5a81
0864fbfd +0xc3:  mov    %ebx,0x4(%esp)
0864fc01 +0xc7:  mov    %eax,(%esp)
0864fc04 +0xca:  call   083878f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17396>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17396
0864fc09 +0xcf:  mov    (%eax),%eax
0864fc0b +0xd1:  mov    %eax,-0xc(%ebp)
0864fc0e +0xd4:  mov    0xc(%ebp),%eax
0864fc11 +0xd7:  mov    %eax,%ecx
0864fc13 +0xd9:  imul   -0xc(%ebp),%ecx
0864fc17 +0xdd:  mov    $0x51eb851f,%edx
0864fc1c +0xe2:  mov    %ecx,%eax
0864fc1e +0xe4:  imul   %edx
0864fc20 +0xe6:  sar    $0x5,%edx
0864fc23 +0xe9:  mov    %ecx,%eax
0864fc25 +0xeb:  sar    $0x1f,%eax
0864fc28 +0xee:  mov    %edx,%ecx
0864fc2a +0xf0:  sub    %eax,%ecx
0864fc2c +0xf2:  mov    %ecx,%eax
0864fc2e +0xf4:  add    $0x24,%esp
0864fc31 +0xf7:  pop    %ebx
0864fc32 +0xf8:  pop    %ebp
0864fc33 +0xf9:  ret
```

## 反编译 C

```c
// CUser::gainGuildSkillExp @ 0x864fb3a

/* CUser::gainGuildSkillExp(int) */

int __thiscall CUser::gainGuildSkillExp(CUser *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  vector<int,std::allocator<int>> *this_00;
  int *piVar4;
  
  iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cVar1 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      cVar1 = IsGuildSkillLearn(this,0xc9);
      if (cVar1 == '\0') {
        iVar2 = 0;
      }
      else {
        iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
        iVar3 = G_CDataManager();
        iVar2 = CDataManager::find_skill(iVar3,iVar2);
        this_00 = (vector<int,std::allocator<int>> *)
                  std::
                  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                  ::operator[]((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                                *)(iVar2 + 0x108),0);
        piVar4 = (int *)std::vector<int,std::allocator<int>>::at(this_00,(int)cVar1 - 1);
        iVar2 = (param_1 * *piVar4) / 100;
      }
    }
  }
  return iVar2;
}
```
