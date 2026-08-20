# AddBanList

`_ZN7WarRoom10AddBanListEP5CUser`

`WarRoom::AddBanList(CUser*)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086ba948` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba948  _ZN7WarRoom10AddBanListEP5CUser
#           WarRoom::AddBanList(CUser*)
# range [0x086ba948, 0x086ba99d]
086ba948 +0x00:  push   %ebp
086ba949 +0x01:  mov    %esp,%ebp
086ba94b +0x03:  push   %ebx
086ba94c +0x04:  sub    $0x24,%esp
086ba94f +0x07:  mov    0xc(%ebp),%eax
086ba952 +0x0a:  mov    %eax,(%esp)
086ba955 +0x0d:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
086ba95a +0x12:  test   %al,%al
086ba95c +0x14:  jne    086ba996 <+0x4e>
086ba95e +0x16:  mov    0xc(%ebp),%eax
086ba961 +0x19:  mov    %eax,(%esp)
086ba964 +0x1c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086ba969 +0x21:  mov    %eax,-0xc(%ebp)
086ba96c +0x24:  mov    0x8(%ebp),%eax
086ba96f +0x27:  lea    0x1d8(%eax),%edx
086ba975 +0x2d:  lea    -0xc(%ebp),%eax
086ba978 +0x30:  mov    %eax,0x4(%esp)
086ba97c +0x34:  mov    %edx,(%esp)
086ba97f +0x37:  call   086c0c06 <_GLOBAL__I__ZN7WarRoomC2Ev+0xff>  ; global constructors keyed to WarRoom::WarRoom()+0xff
086ba984 +0x3c:  mov    %eax,%ebx
086ba986 +0x3e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ba98d +0x45:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086ba992 +0x4a:  mov    %eax,(%ebx)
086ba994 +0x4c:  jmp    086ba997 <+0x4f>
086ba996 +0x4e:  nop
086ba997 +0x4f:  add    $0x24,%esp
086ba99a +0x52:  pop    %ebx
086ba99b +0x53:  pop    %ebp
086ba99c +0x54:  ret
086ba99d +0x55:  nop
```

## 反编译 C

```c
// WarRoom::AddBanList @ 0x86ba948

/* WarRoom::AddBanList(CUser*) */

void __thiscall WarRoom::AddBanList(WarRoom *this,CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint local_10 [2];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\0') {
    local_10[0] = CUser::get_acc_id(param_1);
    puVar2 = (undefined4 *)
             std::
             map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
             ::operator[]((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                           *)(this + 0x1d8),local_10);
    uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *puVar2 = uVar3;
  }
  return;
}
```
