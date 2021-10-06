import React from "react";
import {
    BrowserRouter as Router,
    Switch,
    Route
} from "react-router-dom";
import Index from "./pages/home/index.jsx";

export default function Routes() {
    return (
        <Router>
            <Switch>
                <Route exact path="/" component={Index} />
            </Switch>
        </Router>
    );
}