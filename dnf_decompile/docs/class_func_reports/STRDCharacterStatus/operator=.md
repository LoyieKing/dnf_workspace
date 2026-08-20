# operator=

`_ZN19STRDCharacterStatusaSERK25STRDCharacterStatusClient`

`STRDCharacterStatus::operator=(STRDCharacterStatusClient const&)`

| 类 | 地址 |
|---|---|
| `STRDCharacterStatus` | `0x08a0c942` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a0c942  _ZN19STRDCharacterStatusaSERK25STRDCharacterStatusClient
#           STRDCharacterStatus::operator=(STRDCharacterStatusClient const&)
# range [0x08a0c942, 0x08a0cab7]
08a0c942 +0x000:  push   %ebp
08a0c943 +0x001:  mov    %esp,%ebp
08a0c945 +0x003:  sub    $0x10,%esp
08a0c948 +0x006:  mov    0xc(%ebp),%eax
08a0c94b +0x009:  mov    (%eax),%eax
08a0c94d +0x00b:  mov    %eax,%edx
08a0c94f +0x00d:  mov    0x8(%ebp),%eax
08a0c952 +0x010:  mov    %edx,(%eax)
08a0c954 +0x012:  mov    0xc(%ebp),%eax
08a0c957 +0x015:  mov    0x4(%eax),%eax
08a0c95a +0x018:  mov    %eax,%edx
08a0c95c +0x01a:  mov    0x8(%ebp),%eax
08a0c95f +0x01d:  mov    %edx,0x4(%eax)
08a0c962 +0x020:  mov    0xc(%ebp),%eax
08a0c965 +0x023:  mov    0x8(%eax),%eax
08a0c968 +0x026:  mov    %eax,%edx
08a0c96a +0x028:  mov    0x8(%ebp),%eax
08a0c96d +0x02b:  mov    %dx,0x8(%eax)
08a0c971 +0x02f:  mov    0xc(%ebp),%eax
08a0c974 +0x032:  mov    0xc(%eax),%eax
08a0c977 +0x035:  mov    %eax,%edx
08a0c979 +0x037:  mov    0x8(%ebp),%eax
08a0c97c +0x03a:  mov    %dx,0xa(%eax)
08a0c980 +0x03e:  mov    0xc(%ebp),%eax
08a0c983 +0x041:  mov    0x10(%eax),%eax
08a0c986 +0x044:  mov    %eax,%edx
08a0c988 +0x046:  mov    0x8(%ebp),%eax
08a0c98b +0x049:  mov    %dx,0xc(%eax)
08a0c98f +0x04d:  mov    0xc(%ebp),%eax
08a0c992 +0x050:  mov    0x14(%eax),%eax
08a0c995 +0x053:  mov    %eax,%edx
08a0c997 +0x055:  mov    0x8(%ebp),%eax
08a0c99a +0x058:  mov    %dx,0xe(%eax)
08a0c99e +0x05c:  movl   $0x0,-0x8(%ebp)
08a0c9a5 +0x063:  jmp    08a0c9c7 <+0x85>
08a0c9a7 +0x065:  mov    -0x8(%ebp),%ecx
08a0c9aa +0x068:  mov    -0x8(%ebp),%edx
08a0c9ad +0x06b:  mov    0xc(%ebp),%eax
08a0c9b0 +0x06e:  add    $0x4,%edx
08a0c9b3 +0x071:  mov    0x8(%eax,%edx,4),%eax
08a0c9b7 +0x075:  mov    %eax,%edx
08a0c9b9 +0x077:  mov    0x8(%ebp),%eax
08a0c9bc +0x07a:  add    $0x8,%ecx
08a0c9bf +0x07d:  mov    %dx,(%eax,%ecx,2)
08a0c9c3 +0x081:  addl   $0x1,-0x8(%ebp)
08a0c9c7 +0x085:  cmpl   $0x3,-0x8(%ebp)
08a0c9cb +0x089:  setle  %al
08a0c9ce +0x08c:  test   %al,%al
08a0c9d0 +0x08e:  jne    08a0c9a7 <+0x65>
08a0c9d2 +0x090:  movl   $0x0,-0x4(%ebp)
08a0c9d9 +0x097:  jmp    08a0c9fc <+0xba>
08a0c9db +0x099:  mov    -0x4(%ebp),%ecx
08a0c9de +0x09c:  mov    -0x4(%ebp),%edx
08a0c9e1 +0x09f:  mov    0xc(%ebp),%eax
08a0c9e4 +0x0a2:  add    $0x8,%edx
08a0c9e7 +0x0a5:  mov    0x8(%eax,%edx,4),%eax
08a0c9eb +0x0a9:  mov    %eax,%edx
08a0c9ed +0x0ab:  mov    0x8(%ebp),%eax
08a0c9f0 +0x0ae:  add    $0x8,%ecx
08a0c9f3 +0x0b1:  mov    %dx,0x8(%eax,%ecx,2)
08a0c9f8 +0x0b6:  addl   $0x1,-0x4(%ebp)
08a0c9fc +0x0ba:  cmpl   $0x10,-0x4(%ebp)
08a0ca00 +0x0be:  setle  %al
08a0ca03 +0x0c1:  test   %al,%al
08a0ca05 +0x0c3:  jne    08a0c9db <+0x99>
08a0ca07 +0x0c5:  mov    0xc(%ebp),%eax
08a0ca0a +0x0c8:  mov    0x6c(%eax),%edx
08a0ca0d +0x0cb:  mov    0x8(%ebp),%eax
08a0ca10 +0x0ce:  mov    %edx,0x3a(%eax)
08a0ca13 +0x0d1:  mov    0xc(%ebp),%eax
08a0ca16 +0x0d4:  mov    0x70(%eax),%eax
08a0ca19 +0x0d7:  mov    %eax,%edx
08a0ca1b +0x0d9:  mov    0x8(%ebp),%eax
08a0ca1e +0x0dc:  mov    %dx,0x3e(%eax)
08a0ca22 +0x0e0:  mov    0xc(%ebp),%eax
08a0ca25 +0x0e3:  mov    0x74(%eax),%eax
08a0ca28 +0x0e6:  mov    %eax,%edx
08a0ca2a +0x0e8:  mov    0x8(%ebp),%eax
08a0ca2d +0x0eb:  mov    %dx,0x40(%eax)
08a0ca31 +0x0ef:  mov    0xc(%ebp),%eax
08a0ca34 +0x0f2:  mov    0x78(%eax),%eax
08a0ca37 +0x0f5:  mov    %eax,%edx
08a0ca39 +0x0f7:  mov    0x8(%ebp),%eax
08a0ca3c +0x0fa:  mov    %edx,0x42(%eax)
08a0ca3f +0x0fd:  mov    0xc(%ebp),%eax
08a0ca42 +0x100:  mov    0x7c(%eax),%eax
08a0ca45 +0x103:  mov    %eax,%edx
08a0ca47 +0x105:  mov    0x8(%ebp),%eax
08a0ca4a +0x108:  mov    %dx,0x46(%eax)
08a0ca4e +0x10c:  mov    0xc(%ebp),%eax
08a0ca51 +0x10f:  mov    0x80(%eax),%eax
08a0ca57 +0x115:  mov    %eax,%edx
08a0ca59 +0x117:  mov    0x8(%ebp),%eax
08a0ca5c +0x11a:  mov    %dx,0x48(%eax)
08a0ca60 +0x11e:  mov    0xc(%ebp),%eax
08a0ca63 +0x121:  mov    0x84(%eax),%eax
08a0ca69 +0x127:  mov    %eax,%edx
08a0ca6b +0x129:  mov    0x8(%ebp),%eax
08a0ca6e +0x12c:  mov    %dx,0x4a(%eax)
08a0ca72 +0x130:  mov    0xc(%ebp),%eax
08a0ca75 +0x133:  mov    0x88(%eax),%eax
08a0ca7b +0x139:  mov    %eax,%edx
08a0ca7d +0x13b:  mov    0x8(%ebp),%eax
08a0ca80 +0x13e:  mov    %dx,0x4c(%eax)
08a0ca84 +0x142:  mov    0xc(%ebp),%eax
08a0ca87 +0x145:  mov    0x8c(%eax),%edx
08a0ca8d +0x14b:  mov    0x8(%ebp),%eax
08a0ca90 +0x14e:  mov    %edx,0x4e(%eax)
08a0ca93 +0x151:  mov    0xc(%ebp),%eax
08a0ca96 +0x154:  mov    0x90(%eax),%eax
08a0ca9c +0x15a:  mov    %eax,%edx
08a0ca9e +0x15c:  mov    0x8(%ebp),%eax
08a0caa1 +0x15f:  mov    %dl,0x52(%eax)
08a0caa4 +0x162:  mov    0xc(%ebp),%eax
08a0caa7 +0x165:  mov    0x94(%eax),%edx
08a0caad +0x16b:  mov    0x8(%ebp),%eax
08a0cab0 +0x16e:  mov    %edx,0x53(%eax)
08a0cab3 +0x171:  mov    0x8(%ebp),%eax
08a0cab6 +0x174:  leave
08a0cab7 +0x175:  ret
```

## 反编译 C

```c
// STRDCharacterStatus::operator= @ 0x8a0c942

/* STRDCharacterStatus::TEMPNAMEPLACEHOLDERVALUE(STRDCharacterStatusClient const&) */

STRDCharacterStatus * __thiscall
STRDCharacterStatus::operator=(STRDCharacterStatus *this,STRDCharacterStatusClient *param_1)

{
  int local_c;
  int local_8;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(short *)(this + 8) = (short)*(undefined4 *)(param_1 + 8);
  *(short *)(this + 10) = (short)*(undefined4 *)(param_1 + 0xc);
  *(short *)(this + 0xc) = (short)*(undefined4 *)(param_1 + 0x10);
  *(short *)(this + 0xe) = (short)*(undefined4 *)(param_1 + 0x14);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(short *)(this + (local_c + 8) * 2) = (short)*(undefined4 *)(param_1 + (local_c + 4) * 4 + 8);
  }
  for (local_8 = 0; local_8 < 0x11; local_8 = local_8 + 1) {
    *(short *)(this + (local_8 + 8) * 2 + 8) =
         (short)*(undefined4 *)(param_1 + (local_8 + 8) * 4 + 8);
  }
  *(undefined4 *)(this + 0x3a) = *(undefined4 *)(param_1 + 0x6c);
  *(short *)(this + 0x3e) = (short)*(undefined4 *)(param_1 + 0x70);
  *(short *)(this + 0x40) = (short)*(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x42) = *(undefined4 *)(param_1 + 0x78);
  *(short *)(this + 0x46) = (short)*(undefined4 *)(param_1 + 0x7c);
  *(short *)(this + 0x48) = (short)*(undefined4 *)(param_1 + 0x80);
  *(short *)(this + 0x4a) = (short)*(undefined4 *)(param_1 + 0x84);
  *(short *)(this + 0x4c) = (short)*(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x4e) = *(undefined4 *)(param_1 + 0x8c);
  this[0x52] = SUB41(*(undefined4 *)(param_1 + 0x90),0);
  *(undefined4 *)(this + 0x53) = *(undefined4 *)(param_1 + 0x94);
  return this;
}
```
