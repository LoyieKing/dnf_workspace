# CheckTotalItemPrice

`_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv`

`private_store::CPrivateStore::CheckTotalItemPrice()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c76f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c76f0  _ZN13private_store13CPrivateStore19CheckTotalItemPriceEv
#           private_store::CPrivateStore::CheckTotalItemPrice()
# range [0x085c76f0, 0x085c77ff]
085c76f0 +0x000:  push   %ebp
085c76f1 +0x001:  mov    %esp,%ebp
085c76f3 +0x003:  push   %ebx
085c76f4 +0x004:  sub    $0x24,%esp
085c76f7 +0x007:  movl   $0x0,-0x18(%ebp)
085c76fe +0x00e:  movl   $0x0,-0x14(%ebp)
085c7705 +0x015:  jmp    085c77d7 <+0xe7>
085c770a +0x01a:  mov    -0x14(%ebp),%eax
085c770d +0x01d:  mov    0x8(%ebp),%edx
085c7710 +0x020:  add    $0x3c,%edx
085c7713 +0x023:  mov    %eax,0x4(%esp)
085c7717 +0x027:  mov    %edx,(%esp)
085c771a +0x02a:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c771f +0x02f:  mov    %eax,-0x10(%ebp)
085c7722 +0x032:  mov    -0x10(%ebp),%eax
085c7725 +0x035:  movzbl 0x3d(%eax),%eax
085c7729 +0x039:  cmp    $0x2,%al
085c772b +0x03b:  jne    085c77d3 <+0xe3>
085c7731 +0x041:  mov    -0x10(%ebp),%eax
085c7734 +0x044:  mov    0x40(%eax),%eax
085c7737 +0x047:  test   %eax,%eax
085c7739 +0x049:  jne    085c7745 <+0x55>
085c773b +0x04b:  mov    $0x0,%eax
085c7740 +0x050:  jmp    085c77f9 <+0x109>
085c7745 +0x055:  movl   $0x0,-0xc(%ebp)
085c774c +0x05c:  mov    -0x10(%ebp),%eax
085c774f +0x05f:  mov    0x2(%eax),%eax
085c7752 +0x062:  mov    %eax,%ebx
085c7754 +0x064:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c7759 +0x069:  mov    %ebx,0x4(%esp)
085c775d +0x06d:  mov    %eax,(%esp)
085c7760 +0x070:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085c7765 +0x075:  mov    %eax,-0xc(%ebp)
085c7768 +0x078:  cmpl   $0x0,-0xc(%ebp)
085c776c +0x07c:  sete   %al
085c776f +0x07f:  test   %al,%al
085c7771 +0x081:  je     085c777a <+0x8a>
085c7773 +0x083:  mov    $0x0,%eax
085c7778 +0x088:  jmp    085c77f9 <+0x109>
085c777a +0x08a:  mov    -0xc(%ebp),%eax
085c777d +0x08d:  mov    %eax,(%esp)
085c7780 +0x090:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085c7785 +0x095:  test   %al,%al
085c7787 +0x097:  je     085c77b6 <+0xc6>
085c7789 +0x099:  mov    -0x10(%ebp),%eax
085c778c +0x09c:  mov    0x7(%eax),%edx
085c778f +0x09f:  mov    -0x10(%ebp),%eax
085c7792 +0x0a2:  mov    0x40(%eax),%eax
085c7795 +0x0a5:  lea    -0x18(%ebp),%ecx
085c7798 +0x0a8:  mov    %ecx,0x8(%esp)
085c779c +0x0ac:  mov    %edx,0x4(%esp)
085c77a0 +0x0b0:  mov    %eax,(%esp)
085c77a3 +0x0b3:  call   085cd22a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1f40>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1f40
085c77a8 +0x0b8:  xor    $0x1,%eax
085c77ab +0x0bb:  test   %al,%al
085c77ad +0x0bd:  je     085c77d3 <+0xe3>
085c77af +0x0bf:  mov    $0x0,%eax
085c77b4 +0x0c4:  jmp    085c77f9 <+0x109>
085c77b6 +0x0c6:  mov    -0x10(%ebp),%eax
085c77b9 +0x0c9:  mov    0x40(%eax),%edx
085c77bc +0x0cc:  mov    -0x18(%ebp),%eax
085c77bf +0x0cf:  lea    (%edx,%eax,1),%eax
085c77c2 +0x0d2:  mov    %eax,-0x18(%ebp)
085c77c5 +0x0d5:  mov    -0x18(%ebp),%eax
085c77c8 +0x0d8:  test   %eax,%eax
085c77ca +0x0da:  jg     085c77d3 <+0xe3>
085c77cc +0x0dc:  mov    $0x0,%eax
085c77d1 +0x0e1:  jmp    085c77f9 <+0x109>
085c77d3 +0x0e3:  addl   $0x1,-0x14(%ebp)
085c77d7 +0x0e7:  cmpl   $0xd,-0x14(%ebp)
085c77db +0x0eb:  setle  %al
085c77de +0x0ee:  test   %al,%al
085c77e0 +0x0f0:  jne    085c770a <+0x1a>
085c77e6 +0x0f6:  mov    -0x18(%ebp),%eax
085c77e9 +0x0f9:  test   %eax,%eax
085c77eb +0x0fb:  jg     085c77f4 <+0x104>
085c77ed +0x0fd:  mov    $0x0,%eax
085c77f2 +0x102:  jmp    085c77f9 <+0x109>
085c77f4 +0x104:  mov    $0x1,%eax
085c77f9 +0x109:  add    $0x24,%esp
085c77fc +0x10c:  pop    %ebx
085c77fd +0x10d:  pop    %ebp
085c77fe +0x10e:  ret
085c77ff +0x10f:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::CheckTotalItemPrice @ 0x85c76f0

/* private_store::CPrivateStore::CheckTotalItemPrice() */

bool __thiscall private_store::CPrivateStore::CheckTotalItemPrice(CPrivateStore *this)

{
  int iVar1;
  char cVar2;
  CDataManager *this_00;
  int local_1c;
  uint local_18;
  int local_14;
  CItem *local_10;
  
  local_1c = 0;
  local_18 = 0;
  do {
    if (0xd < (int)local_18) {
      return 0 < local_1c;
    }
    local_14 = std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_18);
    if (*(char *)(local_14 + 0x3d) == '\x02') {
      if (*(int *)(local_14 + 0x40) == 0) {
        return false;
      }
      local_10 = (CItem *)0x0;
      iVar1 = *(int *)(local_14 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
      if (local_10 == (CItem *)0x0) {
        return false;
      }
      cVar2 = CItem::is_stackable(local_10);
      if (cVar2 == '\0') {
        local_1c = *(int *)(local_14 + 0x40) + local_1c;
        if (local_1c < 1) {
          return false;
        }
      }
      else {
        cVar2 = COperator<int>::Product(*(int *)(local_14 + 0x40),*(int *)(local_14 + 7),&local_1c);
        if (cVar2 != '\x01') {
          return false;
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
