# EventClassify__CAddItemCountDB

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## get_db_table_name

```asm
// === 0810e15a EventClassify::CAddItemCountDB::get_db_table_name  [0x0810e15a-0x810e167] ===
 810e15a:	55                   	push   %ebp
 810e15b:	89 e5                	mov    %esp,%ebp
 810e15d:	8b 45 08             	mov    0x8(%ebp),%eax
 810e160:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e163:	83 c0 20             	add    $0x20,%eax
 810e166:	5d                   	pop    %ebp
 810e167:	c3                   	ret

```

```c
// EventClassify::CAddItemCountDB::get_db_table_name @ 0x810e15a

/* EventClassify::CAddItemCountDB::get_db_table_name() */

int __thiscall EventClassify::CAddItemCountDB::get_db_table_name(CAddItemCountDB *this)

{
  return *(int *)(this + 0x1c) + 0x20;
}

```

---

## is_event_item

```asm
// === 0810e08e EventClassify::CAddItemCountDB::is_event_item  [0x0810e08e-0x810e0f3] ===
 810e08e:	55                   	push   %ebp
 810e08f:	89 e5                	mov    %esp,%ebp
 810e091:	83 ec 28             	sub    $0x28,%esp
 810e094:	8b 45 08             	mov    0x8(%ebp),%eax
 810e097:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e09a:	83 c0 08             	add    $0x8,%eax
 810e09d:	89 04 24             	mov    %eax,(%esp)
 810e0a0:	e8 1b 01 f8 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 810e0a5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 810e0a8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810e0af:	eb 2f                	jmp    810e0e0 <_ZN13EventClassify15CAddItemCountDB13is_event_itemEi+0x52>
 810e0b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810e0b4:	8b 55 08             	mov    0x8(%ebp),%edx
 810e0b7:	8b 52 1c             	mov    0x1c(%edx),%edx
 810e0ba:	83 c2 08             	add    $0x8,%edx
 810e0bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 810e0c1:	89 14 24             	mov    %edx,(%esp)
 810e0c4:	e8 13 01 f8 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810e0c9:	8b 00                	mov    (%eax),%eax
 810e0cb:	3b 45 0c             	cmp    0xc(%ebp),%eax
 810e0ce:	0f 94 c0             	sete   %al
 810e0d1:	84 c0                	test   %al,%al
 810e0d3:	74 07                	je     810e0dc <_ZN13EventClassify15CAddItemCountDB13is_event_itemEi+0x4e>
 810e0d5:	b8 01 00 00 00       	mov    $0x1,%eax
 810e0da:	eb 16                	jmp    810e0f2 <_ZN13EventClassify15CAddItemCountDB13is_event_itemEi+0x64>
 810e0dc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 810e0e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810e0e3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 810e0e6:	0f 9c c0             	setl   %al
 810e0e9:	84 c0                	test   %al,%al
 810e0eb:	75 c4                	jne    810e0b1 <_ZN13EventClassify15CAddItemCountDB13is_event_itemEi+0x23>
 810e0ed:	b8 00 00 00 00       	mov    $0x0,%eax
 810e0f2:	c9                   	leave
 810e0f3:	c3                   	ret

```

```c
// EventClassify::CAddItemCountDB::is_event_item @ 0x810e08e

/* EventClassify::CAddItemCountDB::is_event_item(int) */

undefined4 __thiscall
EventClassify::CAddItemCountDB::is_event_item(CAddItemCountDB *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  iVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 8));
  local_10 = 0;
  while( true ) {
    if (iVar1 <= (int)local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 8),
                               local_10);
    if (*piVar2 == param_1) break;
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## is_event_quest

```asm
// === 0810e0f4 EventClassify::CAddItemCountDB::is_event_quest  [0x0810e0f4-0x810e159] ===
 810e0f4:	55                   	push   %ebp
 810e0f5:	89 e5                	mov    %esp,%ebp
 810e0f7:	83 ec 28             	sub    $0x28,%esp
 810e0fa:	8b 45 08             	mov    0x8(%ebp),%eax
 810e0fd:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e100:	83 c0 14             	add    $0x14,%eax
 810e103:	89 04 24             	mov    %eax,(%esp)
 810e106:	e8 b5 00 f8 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 810e10b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 810e10e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810e115:	eb 2f                	jmp    810e146 <_ZN13EventClassify15CAddItemCountDB14is_event_questEi+0x52>
 810e117:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810e11a:	8b 55 08             	mov    0x8(%ebp),%edx
 810e11d:	8b 52 1c             	mov    0x1c(%edx),%edx
 810e120:	83 c2 14             	add    $0x14,%edx
 810e123:	89 44 24 04          	mov    %eax,0x4(%esp)
 810e127:	89 14 24             	mov    %edx,(%esp)
 810e12a:	e8 ad 00 f8 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810e12f:	8b 00                	mov    (%eax),%eax
 810e131:	3b 45 0c             	cmp    0xc(%ebp),%eax
 810e134:	0f 94 c0             	sete   %al
 810e137:	84 c0                	test   %al,%al
 810e139:	74 07                	je     810e142 <_ZN13EventClassify15CAddItemCountDB14is_event_questEi+0x4e>
 810e13b:	b8 01 00 00 00       	mov    $0x1,%eax
 810e140:	eb 16                	jmp    810e158 <_ZN13EventClassify15CAddItemCountDB14is_event_questEi+0x64>
 810e142:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 810e146:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810e149:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 810e14c:	0f 9c c0             	setl   %al
 810e14f:	84 c0                	test   %al,%al
 810e151:	75 c4                	jne    810e117 <_ZN13EventClassify15CAddItemCountDB14is_event_questEi+0x23>
 810e153:	b8 00 00 00 00       	mov    $0x0,%eax
 810e158:	c9                   	leave
 810e159:	c3                   	ret

```

```c
// EventClassify::CAddItemCountDB::is_event_quest @ 0x810e0f4

/* EventClassify::CAddItemCountDB::is_event_quest(int) */

undefined4 __thiscall
EventClassify::CAddItemCountDB::is_event_quest(CAddItemCountDB *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  iVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x14));
  local_10 = 0;
  while( true ) {
    if (iVar1 <= (int)local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x14),
                               local_10);
    if (*piVar2 == param_1) break;
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## set_event_data

```asm
// === 0810e064 EventClassify::CAddItemCountDB::set_event_data  [0x0810e064-0x810e08d] ===
 810e064:	55                   	push   %ebp
 810e065:	89 e5                	mov    %esp,%ebp
 810e067:	83 ec 18             	sub    $0x18,%esp
 810e06a:	8b 45 08             	mov    0x8(%ebp),%eax
 810e06d:	8b 00                	mov    (%eax),%eax
 810e06f:	83 c0 18             	add    $0x18,%eax
 810e072:	8b 08                	mov    (%eax),%ecx
 810e074:	8b 45 08             	mov    0x8(%ebp),%eax
 810e077:	8b 55 0c             	mov    0xc(%ebp),%edx
 810e07a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810e07e:	89 04 24             	mov    %eax,(%esp)
 810e081:	ff d1                	call   *%ecx
 810e083:	8b 55 10             	mov    0x10(%ebp),%edx
 810e086:	8b 45 08             	mov    0x8(%ebp),%eax
 810e089:	89 50 1c             	mov    %edx,0x1c(%eax)
 810e08c:	c9                   	leave
 810e08d:	c3                   	ret

```

```c
// EventClassify::CAddItemCountDB::set_event_data @ 0x810e064

/* EventClassify::CAddItemCountDB::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CAddItemCountDB::set_event_data
          (CAddItemCountDB *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

