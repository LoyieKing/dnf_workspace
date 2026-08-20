# dispatch_sig

`_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci`

`Inter_HadesAction::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_HadesAction` | `0x084e5f02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e5f02  _ZN17Inter_HadesAction12dispatch_sigEP5CUserPci
#           Inter_HadesAction::dispatch_sig(CUser*, char*, int)
# range [0x084e5f02, 0x084e6095]
084e5f02 +0x000:  push   %ebp
084e5f03 +0x001:  mov    %esp,%ebp
084e5f05 +0x003:  push   %edi
084e5f06 +0x004:  push   %esi
084e5f07 +0x005:  push   %ebx
084e5f08 +0x006:  sub    $0x5c,%esp
084e5f0b +0x009:  mov    0x10(%ebp),%eax
084e5f0e +0x00c:  mov    %eax,-0x1c(%ebp)
084e5f11 +0x00f:  cmpl   $0x0,0xc(%ebp)
084e5f15 +0x013:  je     084e5f33 <+0x31>
084e5f17 +0x015:  mov    0xc(%ebp),%eax
084e5f1a +0x018:  mov    %eax,(%esp)
084e5f1d +0x01b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e5f22 +0x020:  mov    -0x1c(%ebp),%edx
084e5f25 +0x023:  mov    0xa(%edx),%edx
084e5f28 +0x026:  cmp    %edx,%eax
084e5f2a +0x028:  jne    084e5f33 <+0x31>
084e5f2c +0x02a:  mov    $0x1,%eax
084e5f31 +0x02f:  jmp    084e5f38 <+0x36>
084e5f33 +0x031:  mov    $0x0,%eax
084e5f38 +0x036:  test   %al,%al
084e5f3a +0x038:  je     084e5fdf <+0xdd>
084e5f40 +0x03e:  movl   $0x0,-0x2c(%ebp)
084e5f47 +0x045:  movl   $0x0,-0x28(%ebp)
084e5f4e +0x04c:  movl   $0x0,-0x24(%ebp)
084e5f55 +0x053:  movl   $0x0,-0x20(%ebp)
084e5f5c +0x05a:  mov    0xc(%ebp),%eax
084e5f5f +0x05d:  mov    %eax,(%esp)
084e5f62 +0x060:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
084e5f67 +0x065:  lea    -0x2c(%ebp),%edx
084e5f6a +0x068:  mov    %edx,0x4(%esp)
084e5f6e +0x06c:  mov    %eax,(%esp)
084e5f71 +0x06f:  call   084b9774 <_ZN8XNuclear6CHades5GetIPEPc>  ; XNuclear::CHades::GetIP(char*)
084e5f76 +0x074:  mov    -0x1c(%ebp),%eax
084e5f79 +0x077:  mov    0x1e(%eax),%eax
084e5f7c +0x07a:  mov    %eax,-0x3c(%ebp)
084e5f7f +0x07d:  mov    -0x1c(%ebp),%eax
084e5f82 +0x080:  mov    0x1a(%eax),%edi
084e5f85 +0x083:  mov    -0x1c(%ebp),%eax
084e5f88 +0x086:  mov    0x16(%eax),%esi
084e5f8b +0x089:  mov    -0x1c(%ebp),%eax
084e5f8e +0x08c:  mov    0x12(%eax),%ebx
084e5f91 +0x08f:  mov    0xc(%ebp),%eax
084e5f94 +0x092:  mov    %eax,(%esp)
084e5f97 +0x095:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
084e5f9c +0x09a:  lea    -0x2c(%ebp),%edx
084e5f9f +0x09d:  mov    %edx,0x14(%esp)
084e5fa3 +0x0a1:  mov    -0x3c(%ebp),%edx
084e5fa6 +0x0a4:  mov    %edx,0x10(%esp)
084e5faa +0x0a8:  mov    %edi,0xc(%esp)
084e5fae +0x0ac:  mov    %esi,0x8(%esp)
084e5fb2 +0x0b0:  mov    %ebx,0x4(%esp)
084e5fb6 +0x0b4:  mov    %eax,(%esp)
084e5fb9 +0x0b7:  call   084b95bc <_ZN8XNuclear6CHades14RunHadesActionEjjjjPc>  ; XNuclear::CHades::RunHadesAction(unsigned int, unsigned int, unsigned int, unsigned int, char*)
084e5fbe +0x0bc:  mov    -0x1c(%ebp),%eax
084e5fc1 +0x0bf:  mov    0x12(%eax),%eax
084e5fc4 +0x0c2:  mov    %eax,0x8(%esp)
084e5fc8 +0x0c6:  mov    0xc(%ebp),%eax
084e5fcb +0x0c9:  mov    %eax,0x4(%esp)
084e5fcf +0x0cd:  mov    0x8(%ebp),%eax
084e5fd2 +0x0d0:  mov    %eax,(%esp)
084e5fd5 +0x0d3:  call   084e5e62 <_ZN17Inter_HadesAction10send_alertEP5CUserj>  ; Inter_HadesAction::send_alert(CUser*, unsigned int)
084e5fda +0x0d8:  jmp    084e6089 <+0x187>
084e5fdf +0x0dd:  cmpl   $0x0,0xc(%ebp)
084e5fe3 +0x0e1:  jne    084e6089 <+0x187>
084e5fe9 +0x0e7:  mov    -0x1c(%ebp),%eax
084e5fec +0x0ea:  mov    0xa(%eax),%eax
084e5fef +0x0ed:  test   %eax,%eax
084e5ff1 +0x0ef:  je     084e6089 <+0x187>
084e5ff7 +0x0f5:  mov    -0x1c(%ebp),%eax
084e5ffa +0x0f8:  mov    0x12(%eax),%eax
084e5ffd +0x0fb:  and    $0x2,%eax
084e6000 +0x0fe:  test   %eax,%eax
084e6002 +0x100:  je     084e6040 <+0x13e>
084e6004 +0x102:  mov    -0x1c(%ebp),%eax
084e6007 +0x105:  mov    0x1e(%eax),%ebx
084e600a +0x108:  mov    -0x1c(%ebp),%eax
084e600d +0x10b:  mov    0x1a(%eax),%ecx
084e6010 +0x10e:  mov    -0x1c(%ebp),%eax
084e6013 +0x111:  mov    0x16(%eax),%edx
084e6016 +0x114:  mov    -0x1c(%ebp),%eax
084e6019 +0x117:  mov    0xa(%eax),%eax
084e601c +0x11a:  movl   $0x0,0x14(%esp)
084e6024 +0x122:  mov    %ebx,0x10(%esp)
084e6028 +0x126:  mov    %ecx,0xc(%esp)
084e602c +0x12a:  mov    %edx,0x8(%esp)
084e6030 +0x12e:  movl   $0x2,0x4(%esp)
084e6038 +0x136:  mov    %eax,(%esp)
084e603b +0x139:  call   08445dd4 <_ZN14DB_HadesPunish11makeRequestEjjjjjPc>  ; DB_HadesPunish::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*)
084e6040 +0x13e:  mov    -0x1c(%ebp),%eax
084e6043 +0x141:  mov    0x12(%eax),%eax
084e6046 +0x144:  and    $0x1,%eax
084e6049 +0x147:  test   %al,%al
084e604b +0x149:  je     084e6089 <+0x187>
084e604d +0x14b:  mov    -0x1c(%ebp),%eax
084e6050 +0x14e:  mov    0x1e(%eax),%ebx
084e6053 +0x151:  mov    -0x1c(%ebp),%eax
084e6056 +0x154:  mov    0x1a(%eax),%ecx
084e6059 +0x157:  mov    -0x1c(%ebp),%eax
084e605c +0x15a:  mov    0x16(%eax),%edx
084e605f +0x15d:  mov    -0x1c(%ebp),%eax
084e6062 +0x160:  mov    0xa(%eax),%eax
084e6065 +0x163:  movl   $0x0,0x14(%esp)
084e606d +0x16b:  mov    %ebx,0x10(%esp)
084e6071 +0x16f:  mov    %ecx,0xc(%esp)
084e6075 +0x173:  mov    %edx,0x8(%esp)
084e6079 +0x177:  movl   $0x1,0x4(%esp)
084e6081 +0x17f:  mov    %eax,(%esp)
084e6084 +0x182:  call   08445dd4 <_ZN14DB_HadesPunish11makeRequestEjjjjjPc>  ; DB_HadesPunish::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*)
084e6089 +0x187:  mov    $0x0,%eax
084e608e +0x18c:  add    $0x5c,%esp
084e6091 +0x18f:  pop    %ebx
084e6092 +0x190:  pop    %esi
084e6093 +0x191:  pop    %edi
084e6094 +0x192:  pop    %ebp
084e6095 +0x193:  ret
```

## 反编译 C

```c
// Inter_HadesAction::dispatch_sig @ 0x84e5f02

/* Inter_HadesAction::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_HadesAction::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  CHades *pCVar7;
  char local_30 [16];
  int local_20;
  
  local_20 = param_3;
  if (param_2 != (char *)0x0) {
    iVar6 = CUser::get_acc_id((CUser *)param_2);
    if (iVar6 == *(int *)(local_20 + 10)) {
      bVar5 = true;
      goto LAB_084e5f38;
    }
  }
  bVar5 = false;
LAB_084e5f38:
  if (bVar5) {
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_30[8] = '\0';
    local_30[9] = '\0';
    local_30[10] = '\0';
    local_30[0xb] = '\0';
    local_30[0xc] = '\0';
    local_30[0xd] = '\0';
    local_30[0xe] = '\0';
    local_30[0xf] = '\0';
    pCVar7 = (CHades *)CUser::getHades((CUser *)param_2);
    XNuclear::CHades::GetIP(pCVar7,local_30);
    uVar1 = *(uint *)(local_20 + 0x1e);
    uVar2 = *(uint *)(local_20 + 0x1a);
    uVar3 = *(uint *)(local_20 + 0x16);
    uVar4 = *(uint *)(local_20 + 0x12);
    pCVar7 = (CHades *)CUser::getHades((CUser *)param_2);
    XNuclear::CHades::RunHadesAction(pCVar7,uVar4,uVar3,uVar2,uVar1,local_30);
    send_alert((Inter_HadesAction *)param_1,(CUser *)param_2,*(uint *)(local_20 + 0x12));
  }
  else if ((param_2 == (char *)0x0) && (*(int *)(local_20 + 10) != 0)) {
    if ((*(uint *)(local_20 + 0x12) & 2) != 0) {
      DB_HadesPunish::makeRequest
                (*(uint *)(local_20 + 10),2,*(uint *)(local_20 + 0x16),*(uint *)(local_20 + 0x1a),
                 *(uint *)(local_20 + 0x1e),(char *)0x0);
    }
    if ((*(uint *)(local_20 + 0x12) & 1) != 0) {
      DB_HadesPunish::makeRequest
                (*(uint *)(local_20 + 10),1,*(uint *)(local_20 + 0x16),*(uint *)(local_20 + 0x1a),
                 *(uint *)(local_20 + 0x1e),(char *)0x0);
    }
  }
  return 0;
}
```
