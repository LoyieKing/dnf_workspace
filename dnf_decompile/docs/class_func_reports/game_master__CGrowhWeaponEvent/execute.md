# execute

`_ZN11game_master17CGrowhWeaponEvent7executeEv`

`game_master::CGrowhWeaponEvent::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CGrowhWeaponEvent` | `0x084b293c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b293c  _ZN11game_master17CGrowhWeaponEvent7executeEv
#           game_master::CGrowhWeaponEvent::execute()
# range [0x084b293c, 0x084b2a01]
084b293c +0x00:  push   %ebp
084b293d +0x01:  mov    %esp,%ebp
084b293f +0x03:  push   %ebx
084b2940 +0x04:  sub    $0x24,%esp
084b2943 +0x07:  mov    0x8(%ebp),%eax
084b2946 +0x0a:  mov    %eax,(%esp)
084b2949 +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b294e +0x12:  mov    %eax,-0x10(%ebp)
084b2951 +0x15:  cmpl   $0x0,-0x10(%ebp)
084b2955 +0x19:  je     084b29fa <+0xbe>
084b295b +0x1f:  mov    -0x10(%ebp),%eax
084b295e +0x22:  mov    %eax,(%esp)
084b2961 +0x25:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
084b2966 +0x2a:  mov    %eax,-0xc(%ebp)
084b2969 +0x2d:  mov    0x8(%ebp),%eax
084b296c +0x30:  movzbl 0x8(%eax),%eax
084b2970 +0x34:  test   %al,%al
084b2972 +0x36:  je     084b29b6 <+0x7a>
084b2974 +0x38:  mov    -0xc(%ebp),%eax
084b2977 +0x3b:  movl   $0x0,0x8(%eax)
084b297e +0x42:  mov    -0xc(%ebp),%eax
084b2981 +0x45:  movl   $0x0,0x4(%eax)
084b2988 +0x4c:  mov    -0xc(%ebp),%eax
084b298b +0x4f:  movb   $0x0,(%eax)
084b298e +0x52:  mov    -0xc(%ebp),%eax
084b2991 +0x55:  movw   $0x0,0x10(%eax)
084b2997 +0x5b:  mov    -0xc(%ebp),%eax
084b299a +0x5e:  movl   $0x0,0xc(%eax)
084b29a1 +0x65:  mov    -0x10(%ebp),%eax
084b29a4 +0x68:  mov    %eax,(%esp)
084b29a7 +0x6b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b29ac +0x70:  mov    %eax,(%esp)
084b29af +0x73:  call   08449980 <_ZN25DB_EventGrowthWeaponReset11makeRequestEj>  ; DB_EventGrowthWeaponReset::makeRequest(unsigned int)
084b29b4 +0x78:  jmp    084b29fb <+0xbf>
084b29b6 +0x7a:  mov    0x8(%ebp),%eax
084b29b9 +0x7d:  mov    0xc(%eax),%eax
084b29bc +0x80:  mov    %eax,%edx
084b29be +0x82:  mov    -0xc(%ebp),%eax
084b29c1 +0x85:  mov    %dx,0x10(%eax)
084b29c5 +0x89:  mov    -0xc(%ebp),%eax
084b29c8 +0x8c:  movl   $0x0,0xc(%eax)
084b29cf +0x93:  mov    -0xc(%ebp),%eax
084b29d2 +0x96:  movzwl 0x10(%eax),%eax
084b29d6 +0x9a:  movswl %ax,%ebx
084b29d9 +0x9d:  mov    -0x10(%ebp),%eax
084b29dc +0xa0:  mov    %eax,(%esp)
084b29df +0xa3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b29e4 +0xa8:  movl   $0x0,0x8(%esp)
084b29ec +0xb0:  mov    %ebx,0x4(%esp)
084b29f0 +0xb4:  mov    %eax,(%esp)
084b29f3 +0xb7:  call   084497ea <_ZN35DB_EventUpdateGrowthWeaponTimepiece11makeRequestEjsi>  ; DB_EventUpdateGrowthWeaponTimepiece::makeRequest(unsigned int, short, int)
084b29f8 +0xbc:  jmp    084b29fb <+0xbf>
084b29fa +0xbe:  nop
084b29fb +0xbf:  add    $0x24,%esp
084b29fe +0xc2:  pop    %ebx
084b29ff +0xc3:  pop    %ebp
084b2a00 +0xc4:  ret
084b2a01 +0xc5:  nop
```

## 反编译 C

```c
// game_master::CGrowhWeaponEvent::execute @ 0x84b293c

/* game_master::CGrowhWeaponEvent::execute() */

void __thiscall game_master::CGrowhWeaponEvent::execute(CGrowhWeaponEvent *this)

{
  short sVar1;
  CUser *this_00;
  undefined1 *puVar2;
  uint uVar3;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUser *)0x0) {
    puVar2 = (undefined1 *)CUser::getGrowthWeaponEventdata(this_00);
    if (this[8] == (CGrowhWeaponEvent)0x0) {
      *(short *)(puVar2 + 0x10) = (short)*(undefined4 *)(this + 0xc);
      *(undefined4 *)(puVar2 + 0xc) = 0;
      sVar1 = *(short *)(puVar2 + 0x10);
      uVar3 = CUser::get_acc_id(this_00);
      DB_EventUpdateGrowthWeaponTimepiece::makeRequest(uVar3,sVar1,0);
    }
    else {
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      uVar3 = CUser::get_acc_id(this_00);
      DB_EventGrowthWeaponReset::makeRequest(uVar3);
    }
  }
  return;
}
```
