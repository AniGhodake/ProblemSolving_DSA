package com.tutorialspringboot.firstwebapp.todo;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Service;

@Service
public class TodoService {
	private static List<Todo> todos = new ArrayList<>();
	
	private static int todosCount = 0;
	
	static {
		todos.add(new Todo(++todosCount, "in28minutes", "Learn AWS", LocalDate.now().plusYears(1), false));
		todos.add(new Todo(++todosCount, "in28minutes", "Learn DevOps", LocalDate.now().plusYears(2), false));
		todos.add(new Todo(++todosCount, "in28minutes", "Learn MERN Stack", LocalDate.now().plusYears(3), false));
	}
	
	
	public List<Todo> findByUsername(String username){
		return todos;
	}
	
	
	
	public void addTodo(String username, String description, LocalDate targateDate, boolean done) {
		Todo todo = new Todo(++todosCount, username, description, targateDate, done);
		todos.add(todo);
	}
	
}	
