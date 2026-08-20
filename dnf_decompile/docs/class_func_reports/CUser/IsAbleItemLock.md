# IsAbleItemLock

`_ZNK5CUser14IsAbleItemLockEii`

`CUser::IsAbleItemLock(int, int) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08646a9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646a9c  _ZNK5CUser14IsAbleItemLockEii
#           CUser::IsAbleItemLock(int, int) const
# range [0x08646a9c, 0x08646bfd]
08646a9c +0x000:  push   %ebp
08646a9d +0x001:  mov    %esp,%ebp
08646a9f +0x003:  push   %ebx
08646aa0 +0x004:  sub    $0x24,%esp
08646aa3 +0x007:  mov    0x10(%ebp),%eax
08646aa6 +0x00a:  movzwl %ax,%edx
08646aa9 +0x00d:  mov    0xc(%ebp),%eax
08646aac +0x010:  movzwl %ax,%eax
08646aaf +0x013:  mov    %edx,0x8(%esp)
08646ab3 +0x017:  mov    %eax,0x4(%esp)
08646ab7 +0x01b:  mov    0x8(%ebp),%eax
08646aba +0x01e:  mov    %eax,(%esp)
08646abd +0x021:  call   08680c8a <_ZNK5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short) const
08646ac2 +0x026:  mov    %eax,-0x18(%ebp)
08646ac5 +0x029:  cmpl   $0x0,-0x18(%ebp)
08646ac9 +0x02d:  jne    08646ad5 <+0x39>
08646acb +0x02f:  mov    $0x15,%eax
08646ad0 +0x034:  jmp    08646bf8 <+0x15c>
08646ad5 +0x039:  mov    -0x18(%ebp),%eax
08646ad8 +0x03c:  mov    0x2(%eax),%eax
08646adb +0x03f:  mov    %eax,%ebx
08646add +0x041:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08646ae2 +0x046:  mov    %ebx,0x4(%esp)
08646ae6 +0x04a:  mov    %eax,(%esp)
08646ae9 +0x04d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08646aee +0x052:  mov    %eax,-0x14(%ebp)
08646af1 +0x055:  cmpl   $0x0,-0x14(%ebp)
08646af5 +0x059:  jne    08646b01 <+0x65>
08646af7 +0x05b:  mov    $0x15,%eax
08646afc +0x060:  jmp    08646bf8 <+0x15c>
08646b01 +0x065:  mov    -0x14(%ebp),%eax
08646b04 +0x068:  mov    %eax,(%esp)
08646b07 +0x06b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08646b0c +0x070:  test   %al,%al
08646b0e +0x072:  je     08646b1a <+0x7e>
08646b10 +0x074:  mov    $0x13,%eax
08646b15 +0x079:  jmp    08646bf8 <+0x15c>
08646b1a +0x07e:  mov    -0x14(%ebp),%eax
08646b1d +0x081:  mov    (%eax),%eax
08646b1f +0x083:  add    $0xc,%eax
08646b22 +0x086:  mov    (%eax),%edx
08646b24 +0x088:  mov    -0x14(%ebp),%eax
08646b27 +0x08b:  mov    %eax,(%esp)
08646b2a +0x08e:  call   *%edx
08646b2c +0x090:  cmp    $0x16,%eax
08646b2f +0x093:  sete   %al
08646b32 +0x096:  test   %al,%al
08646b34 +0x098:  je     08646b4d <+0xb1>
08646b36 +0x09a:  mov    -0x18(%ebp),%eax
08646b39 +0x09d:  movzbl (%eax),%eax
08646b3c +0x0a0:  xor    $0x1,%eax
08646b3f +0x0a3:  test   %al,%al
08646b41 +0x0a5:  je     08646b4d <+0xb1>
08646b43 +0x0a7:  mov    $0x13,%eax
08646b48 +0x0ac:  jmp    08646bf8 <+0x15c>
08646b4d +0x0b1:  mov    -0x14(%ebp),%eax
08646b50 +0x0b4:  mov    (%eax),%eax
08646b52 +0x0b6:  add    $0xc,%eax
08646b55 +0x0b9:  mov    (%eax),%edx
08646b57 +0x0bb:  mov    -0x14(%ebp),%eax
08646b5a +0x0be:  mov    %eax,(%esp)
08646b5d +0x0c1:  call   *%edx
08646b5f +0x0c3:  cmp    $0xb,%eax
08646b62 +0x0c6:  jne    08646b7b <+0xdf>
08646b64 +0x0c8:  mov    -0x14(%ebp),%eax
08646b67 +0x0cb:  mov    %eax,(%esp)
08646b6a +0x0ce:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08646b6f +0x0d3:  cmp    $0x2,%eax
08646b72 +0x0d6:  jne    08646b7b <+0xdf>
08646b74 +0x0d8:  mov    $0x1,%eax
08646b79 +0x0dd:  jmp    08646b80 <+0xe4>
08646b7b +0x0df:  mov    $0x0,%eax
08646b80 +0x0e4:  test   %al,%al
08646b82 +0x0e6:  je     08646b8b <+0xef>
08646b84 +0x0e8:  mov    $0x11,%eax
08646b89 +0x0ed:  jmp    08646bf8 <+0x15c>
08646b8b +0x0ef:  cmpl   $0xc,0xc(%ebp)
08646b8f +0x0f3:  jne    08646b98 <+0xfc>
08646b91 +0x0f5:  mov    $0x13,%eax
08646b96 +0x0fa:  jmp    08646bf8 <+0x15c>
08646b98 +0x0fc:  mov    -0x18(%ebp),%eax
08646b9b +0x0ff:  add    $0x11,%eax
08646b9e +0x102:  mov    %eax,(%esp)
08646ba1 +0x105:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08646ba6 +0x10a:  mov    %al,-0xd(%ebp)
08646ba9 +0x10d:  cmpb   $0x0,-0xd(%ebp)
08646bad +0x111:  je     08646bb6 <+0x11a>
08646baf +0x113:  mov    $0x13,%eax
08646bb4 +0x118:  jmp    08646bf8 <+0x15c>
08646bb6 +0x11a:  movl   $0x0,-0xc(%ebp)
08646bbd +0x121:  movzbl -0xd(%ebp),%ebx
08646bc1 +0x125:  movl   $0x2,0x4(%esp)
08646bc9 +0x12d:  mov    0x8(%ebp),%eax
08646bcc +0x130:  mov    %eax,(%esp)
08646bcf +0x133:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08646bd4 +0x138:  mov    %ebx,0x4(%esp)
08646bd8 +0x13c:  mov    %eax,(%esp)
08646bdb +0x13f:  call   08541afe <_ZNK9item_lock9CItemLock14IsAbleItemLockEh>  ; item_lock::CItemLock::IsAbleItemLock(unsigned char) const
08646be0 +0x144:  mov    %eax,-0xc(%ebp)
08646be3 +0x147:  cmpl   $0x0,-0xc(%ebp)
08646be7 +0x14b:  setne  %al
08646bea +0x14e:  test   %al,%al
08646bec +0x150:  je     08646bf3 <+0x157>
08646bee +0x152:  mov    -0xc(%ebp),%eax
08646bf1 +0x155:  jmp    08646bf8 <+0x15c>
08646bf3 +0x157:  mov    $0x0,%eax
08646bf8 +0x15c:  add    $0x24,%esp
08646bfb +0x15f:  pop    %ebx
08646bfc +0x160:  pop    %ebp
08646bfd +0x161:  ret
```

## 反编译 C

```c
// CUser::IsAbleItemLock @ 0x8646a9c

/* CUser::IsAbleItemLock(int, int) const */

int __thiscall CUser::IsAbleItemLock(CUser *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  char *pcVar4;
  int iVar5;
  CDataManager *this_00;
  CItem *this_01;
  
  pcVar4 = (char *)GetCurCharacInventoryRef(this,(ushort)param_1,(ushort)param_2);
  if (pcVar4 == (char *)0x0) {
    iVar5 = 0x15;
  }
  else {
    iVar5 = *(int *)(pcVar4 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CItem *)CDataManager::find_item(this_00,iVar5);
    if (this_01 == (CItem *)0x0) {
      iVar5 = 0x15;
    }
    else {
      cVar2 = CItem::is_stackable(this_01);
      if (cVar2 == '\0') {
        iVar5 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
        if ((iVar5 == 0x16) && (*pcVar4 != '\x01')) {
          iVar5 = 0x13;
        }
        else {
          iVar5 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
          if ((iVar5 == 0xb) && (iVar5 = CItem::GetAttachType(this_01), iVar5 == 2)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            iVar5 = 0x11;
          }
          else if (param_1 == 0xc) {
            iVar5 = 0x13;
          }
          else {
            cVar2 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(pcVar4 + 0x11));
            if (cVar2 == '\0') {
              uVar3 = GetCharacExpandDataR(this,2);
              iVar5 = item_lock::CItemLock::IsAbleItemLock(uVar3);
              if (iVar5 == 0) {
                iVar5 = 0;
              }
            }
            else {
              iVar5 = 0x13;
            }
          }
        }
      }
      else {
        iVar5 = 0x13;
      }
    }
  }
  return iVar5;
}
```
